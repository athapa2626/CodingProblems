#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

//How to find the next lexicographically  greater permutation:
//First traverse the array from right to left.
//Find the first element from the left that is smaller than the element immediately to its right.
//That is the pivot and you want to swap it with something
//what you want to swap it with is, the smallest element to the right of the pivot that is greater than the pivot
//swap pivot with that
//then the subarray to the right of the pivot, you want to reverse it (make it asecnding)
void nextPermutation(std::vector<int> &arr){
    int swap = INT_MAX;
    int swap_index = 0;
    int pivot = - 1;
    for(int i = arr.size() - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1]) {
            pivot = i;
            int j = i + 1;
            while(j < arr.size()){
                if(arr[j] > arr[pivot] && arr[j] < swap) {
                    swap = arr[j];
                    swap_index = j;
                }
                j++;
            }
            std::swap(arr[pivot], arr[swap_index]);
            std::sort(arr.begin() + pivot + 1, arr.end());
            break;
        }
    }
    if(pivot == -1) {
        std::sort(arr.begin(), arr.end());
    }
}

int main() {
    std::vector<int> arr = {1, 3, 5, 4, 2};
    nextPermutation(arr);
    for(int num : arr)
        std::cout << num << " ";
    return 0;
}
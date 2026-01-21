#include <iostream>
#include <vector>
#include <algorithm>

//naive approach, O(n * d) time, O(1) space
void rotateArray(std::vector<int> &arr, int d){
    int arr_size = arr.size() - 1;
    for(int j = 0; j < d; j++) {
        int i = 0;
        int temp = arr[0];
        while(i < arr_size) {
            arr[i] = arr[i + 1];
            i++;
        }
        arr[arr_size] = temp;
    }

}

//expected arpproach O(n) time and O(1)space
void rotateArray2(std::vector<int> &arr, int d) {
    int n = arr.size();
    d %= n;
    std::reverse(arr.begin(), arr.begin() + d);
    std::reverse(arr.begin() + d, arr.end());
    std::reverse(arr.begin(), arr.end());
}

int main(){
    std::vector<int> arr = {1,2,3,4,5,6};
    rotateArray2(arr, 2);
    for(int num : arr) 
        std::cout << num << " ";
    
    return 0;
}
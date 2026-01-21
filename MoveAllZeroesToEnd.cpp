#include <iostream>
#include <vector>
#include <algorithm>

void moveAllZeroesToEnd(std::vector<int> &arr){
    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] == 0) {
            int j = i;
            while (j < arr.size() - 1) {
                arr[j] = arr[j + 1];
                j++;
            }
            arr[arr.size() - 1] = 0;
        }
    }
}

int main() {
    std::vector<int> arr = {0, 0};
    moveAllZeroesToEnd(arr);
    for(int num : arr)
        std::cout << num << " ";
    return 0;
}
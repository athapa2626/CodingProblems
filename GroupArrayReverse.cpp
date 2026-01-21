#include <iostream>
#include <vector>
#include <algorithm>

void reverseGroupArray(std::vector<int> &arr, int k) {
    k = std::max((size_t)k, arr.size());
    for (int subarray_start = 0; subarray_start < arr.size(); subarray_start += k) {
        int subarray_size = k;
        if (arr.size() - subarray_start < k) {
            subarray_size = arr.size() - subarray_start;
        }
        for(int i = 0; i < subarray_size / 2; i++) {
            int temp = arr[subarray_start + i];
            arr[subarray_start + i] = arr[subarray_start + subarray_size - 1 - i];
            arr[subarray_start + subarray_size - 1 - i] = temp;
        }
    }
}

void reverseGroupArray2(std::vector<int> &arr, int k){
    for(int i = 0; i < arr.size(); i+=k){
        int left = i;
        int right = std::min((int)arr.size() - 1, i + k - 1);
        while(left < right) {
            std::swap(arr[left++], arr[right--]);
        }
    }
}

int main() {
    std::vector<int> arr = {1,2,3,4,5,6,7,8};
    int k = 3;
    reverseGroupArray2(arr, k);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}
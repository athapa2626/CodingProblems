#include <iostream>
#include <vector>
#include <algorithm>

void waveArray(std::vector<int> &arr) {
    for(int i = 0; i < arr.size() - 1; i+=2) {
        std::swap(arr[i], arr[i+1]);
    }
}

int main () {
    std::vector<int> arr = {2, 4, 7, 8, 9, 10};
    waveArray(arr);
    for(int num : arr) 
        std::cout << num << " ";
    return 0;
}
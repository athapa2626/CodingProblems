#include <iostream>
#include <vector>
#include <algorithm>

int majorityElement(std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end());
    if(arr.size() == 1) {
        return arr[0];
    }
    int count = 1;
    int value = 0;
    for(int i = 0; i < arr.size() - 2; i ++) {
        if (arr[i] == arr[i + 1]) {
            count++;
            value = arr[i];
        }
    }
    return count > arr.size() / 2 ? value : -1;
}

int main() {
    std::vector<int> arr = {2, 13};
    std::cout << majorityElement(arr);
    return 0;
}
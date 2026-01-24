#include <iostream>
#include <vector>
#include <algorithm>

int majorityElement(std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end());
    int n = arr.size();
    if(n == 1) {
        return arr[0];
    }
    int count = 1;
    int value = arr[n/2];
    for(int i = 0; i < n - 2; i ++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count > arr.size() / 2 ? value : -1;
}

int main() {
    std::vector<int> arr = {1, 1, 2, 1, 3, 5, 1};
    std::cout << majorityElement(arr);
    return 0;
}
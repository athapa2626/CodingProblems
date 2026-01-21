#include <iostream>
#include <vector>
#include <algorithm>

int maxConsecutiveOnes(std::vector<int> &arr) {
    int max = 0;
    int count = 0;
    for(int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1] && count == 0) {
            count+=2;
        }
        else if(arr[i] == arr[i + 1]) {
            count+=1;
        }
        else {
            count = 0;
        }
        max = std::max(count, max);
    }
    return max;
}

int main () {
    std::vector<int> arr = {0, 0, 0, 0};
    std::cout << maxConsecutiveOnes(arr);
    return 0;
}
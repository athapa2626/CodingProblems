#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int maxProfit(std::vector<int> &arr){
    int minSoFar = arr[0];
    int result = 0;
    for(int i = 1; i < arr.size(); i++) {
        minSoFar = std::min(minSoFar, arr[i]);
        result = std::max(result, arr[i] - minSoFar);
    }
   
    return result;
}

int main() {
    std::vector<int> arr = {7, 10, 1, 3, 6, 9, 2};
    std::cout << maxProfit(arr);
    return 0;
}
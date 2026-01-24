#include <iostream>
#include <vector>

int maxProfit(std::vector<int> &arr){
    int profit = 0;
    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i+1] > arr[i])
            profit += arr[i + 1] - arr[i];
    }
    return profit;
}

int main() {
    std::vector<int> arr = {100, 180, 260, 310, 40, 535, 695};
    std::cout << maxProfit(arr);
    return 0;
}
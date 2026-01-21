#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

//O(nlogn) time and O(1) space
int maxProductThree(std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end());

    int arr_size = arr.size() - 1;
    int pos_3_product = arr[arr_size] * arr[arr_size - 1] * arr[arr_size - 2];
    int pos_neg_product = arr[arr_size] * arr[0] * arr[1];

    return pos_3_product > pos_neg_product ? pos_3_product : pos_neg_product;
}

//O(n) time and O(1) space
int maxTripletProduct(const std::vector<int> &arr) {
    int max = INT_MIN;
    int second_max = INT_MIN;
    int third_max = INT_MIN;
    int min = INT_MAX;
    int second_min = INT_MAX;
    for(int num : arr) {
        if(num > max) {
            third_max = second_max;
            second_max = max;
            max = num;
        }
        else if(num > second_max) {
            third_max = second_max;
            second_max = num;
        }
        else if(num > third_max) {
            third_max = num;
        }

        if(num < min) {
            second_min = min;
            min = num;
        }
        else if(num < second_min){
            second_min = num;
        }
    }

    int pos_3_product = max * second_max* third_max;
    int pos_neg_product = max * min * second_min;

    return pos_3_product > pos_neg_product ? pos_3_product : pos_neg_product;
}

int main () {
    std::vector<int> arr = {1, -4, 3, -6, 7, 0};
    std:: cout << maxTripletProduct(arr);
    return 0;
}
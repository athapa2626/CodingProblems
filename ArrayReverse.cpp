//C++ Program to reverse an array in place

#include <iostream>
#include <vector>
#include <algorithm>

//Can also use built in functions with algorithm

void arrayReverse2(std::vector<int> &arr){
    reverse(arr.begin(), arr.end());
}

//This is my attemp
void arrayReverse(std::vector<int> &arr) {
    int temp = 0;
    for (int i = 0; i < arr.size() / 2; i++) {
        temp = arr[i];
        arr[i] = arr[arr.size() - i - 1];
        arr[arr.size() - i - 1] = temp;
    }  
}

int main(){
    std::vector<int> arr = {1,2,3,4,5};
    arrayReverse(arr);
    for (auto x : arr) {
        std::cout << x << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &arr){
    int n = arr.size();
    int new_length = 1;
    
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] != arr[i]) {
            arr[new_length++] = arr[i];
        }
        
    }
    return new_length;
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int new_length = removeDuplicates(arr);
    for(int i = 0; i < new_length; i++)
        std::cout << arr[i] << " ";
    return 0;
}
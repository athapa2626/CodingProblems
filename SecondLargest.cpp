//C++ program to find the second largest element in an array

#include <iostream>
#include <vector>

int second_largest_element(std::vector<int> &array) {
    int max = -1;
    int second_max = -1;
    for(int i = 0; i < array.size(); i++) {
        if(array[i] > max) {
            second_max = max;
            max = array[i];
        }
        else if(array[i] > second_max && array[i] != max) {
            second_max = array[i];
        }
    }
    
    return second_max;
}

int main()
{
    std::vector<int> array = {10, 10, 10};
    std::cout << second_largest_element(array);

    return 0;
}
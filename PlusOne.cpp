#include <iostream>
#include <vector>

int plusOne(const std::vector<int> &arr) {
    int answer = 0;
    int j = 1;
    for(int i = arr.size() - 1; i >= 0; i--)
    {
        answer += arr[i] * j;
        j*= 10;
    }    
    return answer + 1;
}

int main()
{
    std::vector<int> arr = {9,9,9};
    std::cout << plusOne(arr);

    return 0;
}
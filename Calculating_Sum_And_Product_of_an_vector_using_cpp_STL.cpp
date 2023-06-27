#include <iostream>
#include <vector>
#include <numeric> // this librarry is needed for accumulate and multplies

using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> v = {1, 3, 4, 5, 9, 12};

    // Calculate the sum of the array elements
    int sum = accumulate(v.begin(), v.end(), 0);

    // Calculate the product of the array elements
    // We start with an initial value of 1 and use the multiplies<int> function for multiplication
    // we can also use lambda function [](int a  , int b){return a * b;}
    long long product = accumulate(
        v.begin(), v.end(), 1, multiplies<int>());

    cout << "Sum of the array elements : " << sum << '\n';
    cout << "Product of the array elements : " << product << '\n';

    return 0;
}

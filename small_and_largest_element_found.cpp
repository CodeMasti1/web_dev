#include <iostream>
#include <algorithm> // This library is needed for std::min_element() and std::max_element()
using namespace std;

// Finding the smallest and largest element in the array
int main()
{
    int arr[] = {8, 10, -1, 4, 12, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = *min_element(arr, arr + n); // min_element returns a pointer, so we have to dereference it
    int largest = *max_element(arr, arr + n);  // max_element returns a pointer, so we have to dereference it

    cout << "Smallest element in the array: " << smallest << '\n';
    cout << "Largest element in the array: " << largest << '\n';

    return 0;
}

/*
    Output:
    Smallest element in the array: -3
    Largest element in the array: 12
*/

#include <iostream>
#include <algorithm> // this library is needed for std::sort() function

using namespace std;
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << '\n';
}
int main()
{
    int arr[] = {9, 1, 2, -1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array - ";
    printArray(arr, n);
    cout << "Sorting the array ascending order : ";
    sort(arr, arr + n); // sorting the array in ascending order
    printArray(arr, n);
    cout << "Sorting the array descending order : ";
    sort(arr, arr + n, [](int a, int b)
         { return a > b; }); // sorting the array in desceding function using lambda expression
    printArray(arr, n);
    return 0;
}

#include <iostream>
#include <algorithm> // this library is needed for std::copy()
#include <iterator>  // this library is needed for std::ostream_itreator

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Method 1\n";
    for (int a : arr)
        cout << a << ' ';
    cout << '\n';
    cout << "Method 2\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << '\n';
    cout << "Method 3\n";
    for (int i = 0; i < size; i++)
        cout << i[arr] << " ";
    cout << '\n';
    cout << "Method 4\n";
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
    cout << '\n';
    cout << "Method 5\n";
    copy(begin(arr), end(arr), ostream_iterator<int>(cout, " "));
    cout << "\n";
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer : ";
    cin >> n;
    int i = 1;
loop:
    if (i <= n)
    {
        cout << i << ' ';
        i++;
        goto loop;
    }
    cout << '\n';
    return 0;
}

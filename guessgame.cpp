#include <iostream>
#include <ctime>
using namespace std;

void guess()
{
    srand(time(nullptr));
    int res = rand() % 101;
    int count = 0;
    while (true)
    {
        int temp;
        cout << "Enter a number between 1 and 100 : ";
        cin >> temp;
        ++count;
        if (res == temp)
        {
            cout << "You guessed the correct number in " << count << " th guess\n";
            return;
        }
        if (res > temp)
        {
            cout << "You guessed a smaller number\n";
        }
        else
            cout << "You guessed a larger number\n";
        cout << "Guess Again\n";
    }
}

int main()
{
    guess();
    return 0;
}

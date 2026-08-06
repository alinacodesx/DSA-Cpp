#include <iostream>
using namespace std;

// Check Three Fibonacci Numbers

int main()
{
    int a, b, c, n;
    int valid = 1;

    cout << "Enter your series size: ";
    cin >> n;

    while (n > 0)
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;

        cout << "Enter third number: ";
        cin >> c;

        if (a + b != c)
        {
            valid = 0;
            break;
        }

        n--;
    }

    if (valid == 1)
    {
        cout << "All triplets are valid Fibonacci triplets.";
    }
    else
    {
        cout << "Invalid Fibonacci triplet.";
    }

    return 0;
}
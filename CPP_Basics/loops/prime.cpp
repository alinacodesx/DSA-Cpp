#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int flag = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        flag = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }

    return 0;
}
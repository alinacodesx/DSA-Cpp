#include <iostream>
using namespace std;

int main()
{
    int i, n, pass = 0;

    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter element of array at index : " << i << "\n";
        cin >> arr[i];
    }

    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[(n - 1) - i])
        {
            pass = 1;
        }
        else
        {
            pass = 0;
            break;
        }
    }

    if (pass == 1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "enter marks : ";
    cin >> a;
    if (a < 0 || a > 100)
{
    cout << "Invalid marks";
}
    else if (a >= 90){
        cout << "A grade";
    }
    else if (a >= 80)
    {
        cout << "B grade";
    }
    else if (a >= 70)
    {
        cout << "C grade";
    }
    else if (a >= 60)
    {
        cout << "D grade";
    }
    else
    {
        cout << "F grade";
    }
    return 0;
}
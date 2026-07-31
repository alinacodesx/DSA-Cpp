#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "biggest is a";
    }
    else if (b>a && b>c) 
    {
        cout << "biggest is b";
    }
    else 
    {
        cout << "biggest is c";
    }
    return 0;
}
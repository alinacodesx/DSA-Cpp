#include <iostream>
using namespace std;
int main() {
    int a , b , temp;
    cout << "enter your first number";
    cin >> a;
    cout << "enter your second number";
    cin >> b;
    temp = a ;
    a = b;
    b = temp;
    cout << "swapped numbers are" << a << " " << b;
    return 0;
    
}
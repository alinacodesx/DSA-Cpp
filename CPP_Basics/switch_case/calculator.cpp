#include <iostream>
using namespace std;
int main(){
    int a,b,operation;
    cout <<"enter first number: ";
    cin >> a;
    cout <<"enter second number: ";
    cin >> b;
    cout << "choose operation : \n 1. addition \n 2. subtraction \n 3. multiplication \n 4. division \n 5. modulus \n";
    cin >> operation;
    switch (operation)
    {
        case 1:
            cout << "addition is : " << a + b;
            break;
        case 2:
            cout << "subtraction is : " << a - b;
            break;
        case 3:
            cout << "multiplication is : " << a * b;
            break;
        case 4:
            cout << "division is : " << a / b;
            break;
        case 5:
            cout << "modulus is : " << a % b;
            break;
        default:
            cout << "invalid operation";
    }

    return 0;
}

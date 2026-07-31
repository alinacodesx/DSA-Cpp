#include <iostream>
using namespace std;
int main(){
    int a;
    
    cout << "enter your number : ";
    cin >> a;
    if (a == 0){
        cout << "given number is zero!";
    }
    else if ( a > 0){
        cout << "given number is positive !";
    }
    else {
        cout<<" given number is negative !";
    }

    return 0;

}
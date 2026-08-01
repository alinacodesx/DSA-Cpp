#include <iostream>
using namespace std;

int main(){
    int a , i;
    int fact = 1;
    cout << "enter your number: ";
    cin >> a;
    for (i = 1; i < (a + 1); i++ ){
        fact = fact * i ;
    }
    cout << "factorial of your number is: " << fact;
    return 0;

}
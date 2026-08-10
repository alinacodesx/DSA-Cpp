#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
    
}
int main(){
    int a , b; 
    cout << "enter value in a and b";
    cin >> a >> b;
    cout << "Inside main function before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "Inside main function after swap: a = " << a << ", b = " << b << endl;
}
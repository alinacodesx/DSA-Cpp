#include <iostream>
using namespace std;

int main(){
    float f,c;
    
    cout << "enter temperature in celsius";
    cin >> c;
    f = ((9.0/5)*c)+32;
    cout << "temperature in Fahrenheit is:" << " " << f << endl;
    return 0;
}
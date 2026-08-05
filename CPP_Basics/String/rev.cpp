#include <iostream>
using namespace std;
int main(){
    int i;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "reverse string is : ";
    for (i = s.length()-1 ; i >= 0; i-- ){
        cout<< s[i];
    }
    return 0;
}
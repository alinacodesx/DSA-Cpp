#include <iostream>
using namespace std;
int main(){
    int i, pass = 1;
    string s;
    cout << "Enter a string ";
    cin >> s;
    for (i = 0 ; i < s.length()/2 ; i++){
        if (s[i] != s[s.length() -1-i]){
            pass = 0;
        }
    }
    if (pass == 1){
        cout << "palindrome";
    }
    else {
        cout << "not palindrome";
    }
    
        return 0;

}
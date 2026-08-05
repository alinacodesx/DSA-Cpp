#include <iostream>
using namespace std;
int main(){
    int i;
    string s;
    cout << "Enter a string: ";
   getline(cin, s) ;
   for (i = 0; i < s.length(); i++){
    cout << s[i]<<"\n";
   }
    return 0;

}
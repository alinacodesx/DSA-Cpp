#include <iostream>
using namespace std;
int main(){
    int n, i, t = 1;
    cout << "enter a number";
    cin >> n;
    for ( i = 1; i < 11; i++){
        t = n * i;
        cout <<  t << "\n";
    }

}
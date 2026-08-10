#include <iostream>
using namespace std;
int main(){
    int a = 0, b = 1 , c = 0, n;
    cout << "Enter no of terms : ";
    cin >> n;
        while (n > 0){
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
        n--;
    }
    
    return 0;
}
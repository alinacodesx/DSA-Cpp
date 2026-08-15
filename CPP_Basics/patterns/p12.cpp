#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 1 ; j <= i  ; j++) {
            cout << j ;
        }
       for (int k = n - i; k > 0; k--){
            cout << " ";
        }
        for (int j = i ; j > 0  ; j--) {
            cout << j ;
        }  
        cout << endl;    
}
     
}

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    printPattern(n);
    return 0;
}
#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i <= n; i++) {
            for (int k = 0; k < n; k++){
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
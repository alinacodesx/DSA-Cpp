#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i - 1; k++) {
            cout << " ";
        }
        for (int j = 0 ; j < i * 2+1 ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
     for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            cout << " ";
        }
        for (int j = n * 2 -1-i ; j > i ; j--) {
            cout << "*" ;
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
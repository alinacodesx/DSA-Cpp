#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        //Spaces don't "make room" for stars.They simply push the stars to the right.
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
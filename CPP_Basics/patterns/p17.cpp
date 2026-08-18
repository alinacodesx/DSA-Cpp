#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // char ch = 'A';
    //      for(int j = 1; j <= i; j++) {
    //      cout << ch;
    //      ch++;
    // }
    //     cout << endl;

        for (int j = 1 ; j<=i ;j++){
            cout<< char('A'+ i-1);
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
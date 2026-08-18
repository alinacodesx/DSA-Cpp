#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        char ch = 'A';
        for(int j = 0; j <= i; j++) {
            cout << ch ;
            ch++;
        }
          ch = ('A'+i-1);
         for(int j = 1; j <= i; j++) {
         cout <<ch ;
         ch--;
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
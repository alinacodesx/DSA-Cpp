#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = n; i > 0; i--) {
            char ch = 'A';
            for(int j = i; j > 0; j--) {
            cout << ch << " ";
            ch++;
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
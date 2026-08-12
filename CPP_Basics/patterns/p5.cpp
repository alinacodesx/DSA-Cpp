#include <iostream>
using namespace std;
void printPattern(int n) {
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << j + 1 << " ";
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
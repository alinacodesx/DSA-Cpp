#include <iostream>
using namespace std;
void p2(int n){
    int i, j;
    for (i = 0; i < n ; i++){
        for(j = 0; j <= i ; j++){
            cout<<"*";
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cout << "Enter no of lines: ";
    cin >> n;
    p2(n);
    return 0;
}
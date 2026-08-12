#include <iostream>
using namespace std;
void p3(int n){
    int i, j;
    for (i = 0; i < n ; i++){
        for(j = 0; j <= i ; j++){
            cout<<j+1;
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cout << "Enter no of lines: ";
    cin >> n;
    p3(n);
    return 0;
}
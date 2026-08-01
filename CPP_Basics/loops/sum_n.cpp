#include <iostream>
using namespace std;
int main(){
    int n,i, sum = 0 ;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 0; i <= n; i++){
        sum = sum + i;
    }
   
    cout << "Sum of your number is : " << sum;
    return 0;
}
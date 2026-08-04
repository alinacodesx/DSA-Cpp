#include <iostream>
using namespace std;
int main(){
    int i,n ; 
    cout << "Enter size of an array : ";
    cin >> n;
    int arr[n];
    for (i = 0 ; i<n ; i++){
        cout << "enter elements in array at index  " << i << "\n";
        cin >> arr[i];
    }
    for (i = (n-1); i >= 0; i--){
        cout << arr[i]<< "  ";   
    }

    return 0;

}
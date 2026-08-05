#include<iostream>
using namespace std;
int main(){
    int i,j, n;
    cout << "Enter size of array : ";
    cin >>n;
    int arr[n];
    for (i = 0 ; i <n ; i++){
        cout <<"Enter elements in array at index " <<i <<":\n";
        cin >> arr[i];
    }
    for (i = 0 ; i <n ; i++){
        for (j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                cout  << "Duplicate element is : " << arr[j]
                 <<"\n"<<"At index : " << j;
            }
        }
    }
    return 0;  

}
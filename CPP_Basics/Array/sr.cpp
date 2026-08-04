#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for  (i = 0; i<n ; i++){
        cout << " Enter elements in array at index : " << i <<"\n" ;
        cin >> arr[i];
    }
for (i = 0; i <n/2 ; i++){
    j = arr[i];
    arr[i] = arr[(n-1)-i];
    arr[(n-1)-i] = j;
}
for (i = 0; i <n ; i++){
    cout << arr[i];
}
return 0;

}
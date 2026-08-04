# include <iostream>
using namespace std;
int main(){
    int n, i, maximum;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    
    for (i = 0; i < n; i++){
        cout<< "Enter a number for array index :\n"<< i << endl;
        cin >> arr[i];
    }
    maximum = arr[0];
    for (i = 1; i < n ; i++){
        if (arr[i] > maximum){
            maximum = arr[i];
        }
    }
            cout << " largest element is : " << maximum;


    return 0;
    
}

# include <iostream>
using namespace std;
int main(){
    int n, i, minimum;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    
    for (i = 0; i < n; i++){
        cout<< "Enter a number for array index :\n"<< i << endl;
        cin >> arr[i];
    }
    minimum = arr[0];
    for (i = 1; i < n ; i++){
        if (arr[i] < minimum){
            minimum = arr[i];
        }
    }
            cout << " Smallest element is : " << minimum;


    return 0;
    
}

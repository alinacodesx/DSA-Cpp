#include  <iostream>
using namespace  std;
int sum(int a, int b){
    
    return a + b ;
}
int main(){
    int a, b;
    cout << "enter two numbrs: ";
    cin >> a >> b;
    cout << sum(a, b);
    return 0;

}
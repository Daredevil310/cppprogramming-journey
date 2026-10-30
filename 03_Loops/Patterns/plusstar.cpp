#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter side of square : ";
    cin >> n;
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=n ; j++){
           if (i==((n+1)/2) or j==((n+1)/2)){
               cout << "*";
           }
           else {
               cout << " ";
           }
        }
        cout << endl;
    }
}
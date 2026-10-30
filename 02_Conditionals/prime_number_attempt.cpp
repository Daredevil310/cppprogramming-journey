//Take an integer n and determine whether it is a prime number.
#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int a=1;
    if (n <= 1) {
    cout << "Neither prime nor composite";
    }
    for (int i=1 ; i<n; i++){
        if (n%i==0){
            a = i;
        }
    }
    if (a>1){
        cout << "Composite";
    }
    else {
        cout << "Prime";
    }
}
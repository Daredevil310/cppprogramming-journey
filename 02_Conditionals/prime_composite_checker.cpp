#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int a=1;
    for (int i=2 ; i<n; i++){
        if (n%i==0){
            a = i;
        }
    }
    if (a>1){
        cout << "The number is composite";
    }
    else {
        cout << "The number is not composite";
    }
}
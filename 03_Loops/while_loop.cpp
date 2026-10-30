// Write a C++ program that takes a positive integer and reverses its digits using a while loop.

#include <iostream>
using namespace std;

int main(){

    int x;
    cout << "Enter a number : " ;
    cin >> x;
    int reverse = 0;
    while(x>0){
        int a = x%10 ;
        reverse = reverse*10 + a ;
        x = x/10;
    }
    cout << "Reversed number : " << reverse << endl;
    return 0;
}
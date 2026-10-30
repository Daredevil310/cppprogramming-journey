// Write a C++ program that takes a positive integer,
//reverses it using a while loop, and determines whether the original number is a palindrome.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number : " ;
    cin >> n;
    int original = n;
    int reverse = 0;
    while(n>0){
        int a = n%10 ; 
        reverse = reverse*10 + a ;
        n = n/10;
    }
    if(original==reverse){
        cout << "Entered number " << original << " is a palindrome" << endl ;
    }
    else{
            cout << "Entered number " << original << " is not palindrome" << endl ;
    }

    return 0;
}


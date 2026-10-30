// Write a C++ program that takes a positive three-digit integer as input and prints:
// 1. The sum of its digits.
// 2. The reverse of the number.
// 3. Whether the number is divisible by 2.

#include <iostream>
using namespace std;

int main(){

    int n;      //378
    cout << "Enter three digit number n : " << endl;
    cin >> n;

    int a = n % 10 ;
    int b = ( (n % 100) - a ) / 10 ;
    int c = ( (n % 1000) - 10*b - a ) / 100 ;

    cout << "Sum of digits of number " << n << " is " << (a+b+c) << endl ;
    cout << "Reverse of number " << n << " is " << (100*a + 10*b + c*1) << endl ;

    if(n%2==0){
        cout << "Divisible by 2" ;
    }
    else{
        cout << "Not divisible by 2" ;
    }
    return 0;

}
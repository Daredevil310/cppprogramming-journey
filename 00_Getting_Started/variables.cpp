// Write a complete C++ program that:
// 1. Takes two integers as input.
// 2. Stores them in variables named a and b.
// 3. Prints their sum, difference and product.

#include <iostream>
using namespace std;

int main(){

    int x;
    cout << "Enter first integer: " ;
    cin >> x ;
    int y;
    cout << "Enter second integer: " ;
    cin >> y ;

    cout << "Sum of " << x << " and " << y << " is " << x+y << endl;
    cout << "Difference of " << x << " and " << y << " is " << x-y << endl;
    cout << "Product of " << x << " and " << y << " is " << x*y << endl;

    return 0;
}
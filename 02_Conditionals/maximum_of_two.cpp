// Write a function called maxOfTwo that:
// 1. Takes two integers, a and b.
// 2. Returns whichever integer is larger.
// 3. In main(), call it with 14 and 9, then print the result.

#include <iostream>
using namespace std;

int maximum(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int a;
    cout << "Enter first number : " ;
    cin >> a;
    int b;
    cout << "Enter second number : ";
    cin >> b;

    int max = maximum(a,b);
    cout << "Maximum of " << a << " and " << b << " is " << max << endl ;

    return 0;
}
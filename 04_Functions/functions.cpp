// Write a C++ program that defines a function called square:
// - It takes one integer as input.
// - It returns the square of that integer.
// - In main(), call it with 7 and print the result.

#include <iostream>
using namespace std;

float square(float x){
    return x*x;
}

int main(){

    float n;
    cout << "Enter a number : " ;
    cin >> n;

    cout << "Square of entered number " << n << " is " << square(n);

    return 0;
    
}
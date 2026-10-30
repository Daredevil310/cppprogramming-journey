// Write a function called countDigits that:
// 1. Takes a positive integer n.
// 2. Returns the number of digits in n.
// 3. Does not print anything inside the function.
// 4. In main(), call it with 58321 and print the result.

#include <iostream>
using namespace std;

int countDigits(int a){
    int count = 0;

    while(a>0){
        count++;
        a = a/10;
    }
    return count;
}

int main(){

    int n;
    cout << "Enter a number n : " ;
    cin >> n;

    int x = countDigits(n);

    cout << "Number of digits in " << n << " is " << x ;

    return 0;
}
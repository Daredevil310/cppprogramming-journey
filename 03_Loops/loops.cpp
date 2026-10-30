// Write a C++ program that:
// 1. Takes an integer n as input.
// 2. Prints every integer from 1 to n.
// 3. Prints the sum of all integers from 1 to n.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number of terms n : " ;
    cin >> n;
    int sum = 0 ;
    for(int i=1 ; i<=n ; i++){
        cout << i << endl ;
        sum += i;
    }
    cout << "Sum of all integers from 1 to " << n << " is " << sum << endl ;

    return 0;

}
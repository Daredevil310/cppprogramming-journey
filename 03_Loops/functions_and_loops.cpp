// Write a function called sumUpTo that:
// - Takes an integer n.
// - Returns the sum of all integers from 1 through n.
// - Does not print inside the function.
// - In main(), call it with 5 and print the result.

#include <iostream>
using namespace std;

int sumUpTo(int a){

    int sum = 0;
    for(int i=1; i<=a ; i++){
        sum += i;
    }
    return sum;
}

int main(){

    int n;
    cout << "Enter number of terms : " ;
    cin >> n;

    int x = sumUpTo(n);

    cout << "Sum of intergers from 1 to " << n << " is " << x ;
    return 0;
}
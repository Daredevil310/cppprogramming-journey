// Write a C++ program that reads a year and determines whether it is a leap year.

// The rules are:
// - A year divisible by 400 is a leap year.
// - Otherwise, a year divisible by 100 is not a leap year.
// - Otherwise, a year divisible by 4 is a leap year.
// - All other years are not leap years.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a year : " ;
    cin >> n;

    if((n%4==0 && n%100!=0) || n%400==0){
        cout << "Entered year " << n << " is a leap year" << endl ;
    }
    else{
        cout << "Entered year " << n << " is not a leap year" << endl ;
    }

    return 0;

}
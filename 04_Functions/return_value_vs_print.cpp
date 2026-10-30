// Write a function called isEven that:
// - Takes an integer n.
// - Returns true if it's even and false otherwise.
// - Does not print anything inside the function.
// - In main(), call it with 7 and print the returned result as Even or Odd.

#include <iostream>
using namespace std;

bool isEven(int x){
    return x % 2 == 0;
}

int main(){

    int n;
    cout << "Enter a number : " ;
    cin >> n;

    bool a = isEven(n);
    
    if(a==0){
        cout << "Odd" ;
    }
    else{
        cout << "Even" ;
    }

    return 0;
}
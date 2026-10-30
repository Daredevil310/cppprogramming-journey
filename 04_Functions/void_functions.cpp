// Write a function called greet that:
// 1. Takes a person's name as a string.
// 2. Prints Hello, [name]!
// 3. Returns nothing.
// In main(), call it with "Gng".

#include <iostream>
#include <string>
using namespace std;

void greet(string a){
    cout << "Hello, " << a << " !" << endl;
}

int main(){
    string x;
    cout << "Enter your name : ";
    cin >> x;

    greet(x);
}
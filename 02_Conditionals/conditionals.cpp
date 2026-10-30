// Write a C++ program that reads the number of electricity units consumed and calculates the bill using these slabs:
// - First 100 units: ₹2 per unit
// - Next 100 units (101–200): ₹3 per unit
// - Every unit above 200: ₹5 per unit

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter electricity units consumed : " << endl;
    cin >> n;

    if(n>=0 && n<=100){
        cout << "Your electricity bill is : " << 2*n << endl;
    }
    else if(n>100 && n<=200){
        cout << "Your electricity bill is : " << 2*100 + 3*(n-100) << endl;
    }
    else if(n>200){
        cout << "Your electricity bill is : " << 2*100 + 3*100 + 5*(n-200) << endl;
    }
    else{
        cout << "Invalid output" ;
    }

    return 0;

}
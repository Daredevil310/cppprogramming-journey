#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter first side : ";
    cin >> a;
    int b;
    cout << "Enter second side : ";
    cin >> b;
    int c;
    cout << "Enter third side : ";
    cin >> c;
    
    if (a+b>c and b+c>a and a+c>b){
        cout << "Triangle is possible";
    }
    else{
        cout << "Triangle is not possible";
    }
}
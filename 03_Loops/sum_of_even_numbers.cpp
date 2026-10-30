//Takes an integer n as input and prints the sum of all even numbers from 1 to n.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    for (int i=1;i<=n;i++){
        if(i%2==0){
            sum = (sum + i);
        }
        else{
            continue;
        }
    }
    cout << sum;
}
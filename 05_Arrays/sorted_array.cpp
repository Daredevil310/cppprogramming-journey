// Write a C++ program that checks whether an array is sorted in non-decreasing order.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter size of array : " ;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array : " ;

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    bool sorted = true;
    for(int j=0 ; j<n-1 ; j++){
        if(arr[j] > arr[j+1]){
            sorted=false;
        }
    }
    if(sorted==false){
            cout << "Array is not sorted in non-decreasing order" ;
        }
    else{
        cout << "Array is sorted in non-decreasing order" ;
    }

    return 0;
}

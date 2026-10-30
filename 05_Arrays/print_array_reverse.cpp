// Write a function called printReverse that:
// - Takes an integer array and its size.
// - Prints the elements in reverse order.
// - Does not modify the original array.
// - In main(), use {10, 20, 30, 40, 50}.

#include <iostream>
using namespace std;

void printReverse(int arr[], int size){

    int brr[size];
    for(int i=0 ; i<size ; i++){
        brr[i]=arr[size-1-i] ;
    }
    for(int i=0 ; i<size ; i++){
        cout << brr[i] << ", " ;
    }

}

int main(){

    int n;
    cout << "Enter size of array : " ;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array : " ;

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    printReverse(arr, n);
    return 0;
}
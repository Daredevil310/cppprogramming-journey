// Write a function called findLargest that:
// 1. Takes an integer array and its size as parameters.
// 2. Returns the largest element in the array.
// 3. Does not print anything inside the function.
// 4. In main(), use this array: {12, 45, 7, 89, 23} and print the result.

#include <iostream>
using namespace std;

int findLargest(int arr[], int size){
    int x = arr[0];

    for(int i=1 ; i<size ; i++){  //can start from 1 as x is the 0th and is unnecessary
        if(arr[i]>x){
            x = arr[i] ;
        }
    }
    return x;

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

    int max = findLargest(arr, n);

    cout << "Largest element of array is : " << max ;
}
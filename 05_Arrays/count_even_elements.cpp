// Write a function called countEven that:
// - Takes an integer array and its size.
// - Returns how many elements are even.
// - Does not print inside the function.
// - In main(), use this array:

#include <iostream>
using namespace std;

int countEven(int arr[] , int size){
    int count = 0;
    
    for(int i=0 ; i<size ; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
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

    int even = countEven(arr, n);

    cout << "Number of even elements in array is : " << even ;

    return 0;
}
// Write a C++ program with a function called secondLargest that:
// - Takes an integer array and its size.
// - Returns the second-largest distinct element.
// - Does not print inside the function.
// - Uses this array in main():
// int arr[] = {12, 45, 7, 89, 23};

#include <iostream>
using namespace std;

int secondLargest(int arr[] , int size){
    int max = arr[0];
    int second_max = INT_MIN;

    for(int i=0 ; i<size ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int j=0 ; j<size ; j++){
        if((arr[j]>second_max) && arr[j]!=max){
            second_max = arr[j];
        }
    }

    return second_max;

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

    int x = secondLargest(arr , n);

    cout << "Second largest element of array is : " << x ;

}
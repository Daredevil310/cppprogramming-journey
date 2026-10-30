// Write a C++ program that finds whether a target number exists in an array. If it exists, print its index (zero-based); otherwise, print Not found.

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size ,int target){

    int temp = 0;
    for(int j=0 ; j<size ;j++){
        if(arr[j]==target){
            return j;
            break;
        }
        else{
            temp++;
        }
    }
    if(temp==size){
        return -1;
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

    int target;
    cout << "Enter target value : " ;
    cin >> target;
    int x = linearSearch(arr, n , target);

    if(x!= -1){
        cout << "Required target index is : " << x ;
    }
    else{
        cout << "Target value not found" ;
    }
    return 0;

}
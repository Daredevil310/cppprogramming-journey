// Next challenge: Reverse an array in place
// You've already reversed an array using a second array. Now let's do it without creating another array.

#include <iostream>
using namespace std;

void reversearr(int arr[] , int size){
    int temp;
    for(int i=0 ; i<size/2 ; i++){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    for(int i=0 ; i<size ; i++){
        cout << arr[i] << "  " ;
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

    reversearr(arr , n);

}
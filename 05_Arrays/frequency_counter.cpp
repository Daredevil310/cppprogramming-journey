// It should return how many times the target appears in the array.

#include <iostream>
using namespace std;

int countFrequency(int arr[], int size, int target){
    int temp = 0;

    for(int i=0 ; i<size ; i++){
        if(arr[i]==target){
            temp++;
        }
    }
    return temp;
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
    cout << "Enter target value for frequency counting : " ;
    cin >> target;

    int x = countFrequency(arr, n, target);

    cout << "Count : " << x ;

    return 0;
}
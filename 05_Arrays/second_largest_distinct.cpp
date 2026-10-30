#include <iostream>
#include <climits>
using namespace std;

int secondLargestDistinctElement(int arr[], int size){

    // 12 45 7 89 23 -> 45
    // 5 5 5 -> no return
    // 9 9 4 -> 4
    // -10 -3 -7 -> -7
    int largest = INT_MIN;
    int secondlargest = 0;
    for(int i=0 ; i<size ; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i]!=largest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
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

    int x = secondLargestDistinctElement(arr , n);

    cout << "Second largest distinct element of array is : " << x ;

    return 0;
}
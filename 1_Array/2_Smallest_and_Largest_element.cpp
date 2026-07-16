#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[] = {91,2,3,232,4,23232,5,21,8,91,2,3,232,4,3232,5,21,8,-1};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int size_arr = sizeof(arr)/sizeof(int);

    if(size_arr >= 1){

        for(int i=0; i<size_arr; i++){
            
            if(arr[i]<smallest){smallest = arr[i];} // or min(smallest, arr[i])
            if(arr[i]>largest){largest=arr[i];} // or max(largest, arr[i])
        }
    }
    
    cout << "Smallest element of the array is: " << smallest << endl;
    cout << "Largest element of the array is: " << largest << endl;
}

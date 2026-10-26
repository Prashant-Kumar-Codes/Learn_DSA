#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    
    for(int i=1; i<n; i++){ // starting from the 1st element of unsorted part of the array by assuming the 0th element is sorted
        int currEle = arr[i];
        int prevIdx = i-1;

        while(prevIdx>=0 && arr[prevIdx] > currEle){
            arr[prevIdx+1] = arr[prevIdx];
            prevIdx--;
        }

        arr[prevIdx+1] = currEle; // the previous index is placed in its correct position
    }

}

int main(){
    int arr[] = {3,2,3,55,65,74,222,34,54};
    int arrSize = sizeof(arr) / sizeof(int);

    InsertionSort(arr, arrSize);
    
    for(int i=0; i<arrSize; i++){cout << arr[i] << " ";}
}  


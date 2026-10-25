#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){cout << arr[i] << " ";}
}

void Bubble_Sort(int arr[], int n){
    int pass = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){swap(arr[j], arr[j+1]);}
        }
        pass++;
    }
    cout << "Number of passes in bubble sort: " << pass << "\n";
}

void Optimized_Bubble_Sort(int arr[], int n){
    for(int i=0; i<n; i++){
        bool isSwap=false;

        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){cout << "\n\nNumber of passes in optimized bubble sort: " << i << "\n"; break;}
    }
}

int main(){
    int arr1[] = {1,34,4,23,5,55,23,65,236,32};
    int arr2[] = {1,34,4,23,5,55,23,65,236,32};
    int arr_size = sizeof(arr1)/sizeof(int);

    Bubble_Sort(arr1, arr_size);
    printArray(arr1, arr_size);

    Optimized_Bubble_Sort(arr2, arr_size);
    printArray(arr2, arr_size);

}
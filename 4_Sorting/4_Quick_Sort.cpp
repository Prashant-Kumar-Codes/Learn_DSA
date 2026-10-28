#include <iostream>
using namespace std;

// int Partition(int arr[], int st, int end){
//     int idx = st-1;    // for the first pivot st index at -1
//     int pivot = arr[end];   // taking the last element as pivot element

//     for(int j=st; j<end; j++){
//         idx++;
//         swap(arr[j], arr[idx]);
//     }
    
//     idx++;
//     swap(arr[end], arr[idx]);   // set the pivot element at its right place
//     return idx;
// }

int Partition(int arr[], int lb, int ub){
    int pivot = arr[lb];
    int st = lb, end = ub;
    while(st < end){
        while(arr[st] <= pivot){st++;}
        while(arr[end] > pivot){end--;}
        swap(arr[st], arr[end]);
    }

    swap(arr[st], arr[lb]);
    return end;
}


void QuickSort(int arr[], int st, int end){
    if(st < end){
        int pivotIdx = Partition(arr, st, end);
        QuickSort(arr, st, pivotIdx-1);   // left half to the pivot
        QuickSort(arr, pivotIdx+1, end); // right half to the pivot
    }
}

int main(){
    int arr[] = {323,43,53,23,4,35};
    int arrSize = sizeof(arr)/sizeof(int);
    
    QuickSort(arr, 0, arrSize-1);

    for(int x:arr){cout << x << " ";}
    return 0;
}
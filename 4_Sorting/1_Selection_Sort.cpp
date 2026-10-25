#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int smallest_idx = i;

        for(int j=i+1; j<=n-1; j++){
            if(arr[smallest_idx] > arr[j]){
                smallest_idx = j;
            }
        }
        swap(arr[smallest_idx], arr[i]);
    }
}

int main(){
    int arr[] = {1,23,4,23,55,11,63,1,5};
    int arr_len = sizeof(arr)/4;
    cout << arr_len << endl;

    Selection_Sort(arr, arr_len);

    for(int i=0; i<arr_len; i++){cout << arr[i] << " ";}
}
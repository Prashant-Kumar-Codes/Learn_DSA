#include <iostream>
using namespace std;

int linearSearch(int value, int arr[], int size){
    cout << "Searching for the value: " << value << ". Using Linear Search." << endl;

    for(int idx=0; idx<size; idx++){
        if(arr[idx] == value){return idx;}
    }
    return -1;
}

int main(){
    int arr[10] = {394,232,42,1,55,23,63,4,0,6};
    int value = 1;
    int size = 10;

    // call linearSerach function
    int idx = linearSearch(value, arr, size);

    // reading the output of Linear Search
    if(idx < 0){cout << "Element " << value << " does not exist in array." << endl;}
    else{cout << "Element "<< value << " exists in the array at index: " << idx << endl;}
    
    cout << "Successful run\n0 code out"; return 0;
}
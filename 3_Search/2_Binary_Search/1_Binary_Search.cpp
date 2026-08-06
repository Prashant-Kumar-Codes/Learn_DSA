#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector <int> arr, int target){
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){

        // int mid = (start+end)/2;

        // to optimize mid so that we don't stuck with an overflow of int problem so we use this mid formula instead

        int mid = start + (end - start)/2;

        if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end=mid-1;
        }
        else{return mid;}
    }
    
    return -1;
}

int main(){
    vector <int> vec = {1,3,4,5,6,12,43,55,64,66,70,77,343,6645,66445,7435534, 74355349};
    int target = 6645;

    int index = binary_search(vec, target);

    if(index!=-1){cout << "The index of the target " << target << " is: " << index;}
    else{cout << "The target element " << target << " does not exit in the given array. \nreturn: -1";}

    cout << endl << "\nSuccessful run\n0 code out"; return 0;
}
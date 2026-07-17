#include <iostream>
using namespace std;

// reverse array using two pointer approach
// time complexity is O(n)
void reverse(int arr[], int size){
    cout << endl << "Reversing the Array ..." << endl;

    int left = 0;
    int right = size-1;

    // handled both even and odd size of array
    while(left < right){
        int leftEle = arr[left];

        arr[left] = arr[right];
        arr[right] = leftEle;


        left++; right--;

    }

    cout << "Sucessfully reversed the array" << endl;

}

// reverse array using two pointer approach using the swap fucntion
void swapReverse(int arr[], int size){
    cout << endl << "Reversing the Array ..." << endl;

    int left = 0;
    int right = size-1;

    // handled both even and odd size of array
    while(left < right){
        swap(arr[left], arr[right]);
        left++; right--;

    }

    cout << "Sucessfully reversed the array" << endl;

}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = 16;
    
    cout << "Array before reversing: ";
    for(int i=0; i<size; i++){cout << arr[i] << " ";}

    // reverse array function
    reverse(arr, size);

    cout << endl <<  "Array after reversing: ";
    for(int i=0; i<size; i++){cout << arr[i] << " ";}

    // reverse array using swap
    swapReverse(arr, size);
    cout << endl <<  "Array after reversing again with swap function: ";
    for(int i=0; i<size; i++){cout << arr[i] << " ";}
    
    cout << endl << "Successful run\n0 code out"; return 0;
}
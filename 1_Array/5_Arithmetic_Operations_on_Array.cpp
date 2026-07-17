#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){sum += arr[i];}
    return sum;
}
int subtract(int arr[], int size){
    int sub = 0;
    for(int i=0; i<size; i++){sub = abs(sub) - abs(arr[i]);}
    return sub;
}

int product(int arr[], int size){
    int prod = 1;
    for(int i=0; i<size; i++){prod *= arr[i];}
    return prod;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;

    cout << "Arithmetic Operations on array\n\n";
    cout << "Sum of all array elemetns is: " << sum(arr, size) << endl;
    cout << "Subtraction of all array elemetns is: " << subtract(arr, size) << endl;
    cout << "Product of all array elemetns is: " << product(arr, size) << endl;

    cout << endl << "Successful run\n0 code out"; return 0;
}
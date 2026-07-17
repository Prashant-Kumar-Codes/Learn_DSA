#include <iostream>
#include <iterator>
using namespace std;

// function to double the elements (pass by reference)
int arrUpdate(float arr[], int size){
    for(int i=0; i<size; i++){arr[i] *= 2;}
}

int main(){
// create array
    // create array of size 5
    int marks[5] = {10, 20, 30, 44, 55};

    // automatically create size of array
    float price[] = {932.3, 44.23, 4230};

    // array of length 10 but initializing with only 2 elements
    int ten[10] = {1, 2};

// access elements
    cout << "First element of marks: " << marks[0] << endl;

    cout<<endl;

// size of array
    cout << "Size of array marks: " << sizeof(marks)/sizeof(int) << endl;
    
    cout<<endl;

// loop on array
    for(int i=0; i<5; i++){
        cout << "Element at position " << i << " is: " << marks[i] << endl;
    }
    
    cout<<endl;

// calling the arrUpdate function by passing array as reference
    arrUpdate(price, 3);
    cout << "Updated price array: ";
    for(int i=0; i<3; i++){cout << price[i] << " ";}
    cout<<endl;

    cout << "Successful run\n0 code out"; return 0;
}
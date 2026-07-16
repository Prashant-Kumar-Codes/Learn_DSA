#include <iostream>
#include <iterator>
using namespace std;

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




    cout << "Successful run\n0 code out"; return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& vec){
    int left = 0;
    int right = vec.size() - 1;
    while(left < right){
        swap(vec[left], vec[right]);
        left++; right--;
    }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    cout << "Input vector: ";
    for(int val: vec){cout << val << " ";}

    // calling reverse function
    reverse(vec);
    cout << "\nOutput vector(reversed): ";
    for(int val: vec){cout << val << " ";}

    cout << endl << "Successful run\n0 code out"; return 0;
}
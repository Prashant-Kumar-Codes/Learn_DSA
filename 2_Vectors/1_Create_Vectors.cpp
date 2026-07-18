#include <iostream>
#include <vector>
using namespace std;

int main(){

// create vectors
    // syntax: vector<dtype> vector_name = {v1, v2, ..}
    vector<int> vec1; // declared vector
    vector<int> vec2 = {1,2,3}; // declared and initialized vector
    vector<int> vec3(10,0); // (size, value for each index)

// getting Elements from vectors
    cout << "Elements of vector vec2:\n";
    for(int i=0; i<3; i++){cout << i << " postion value of vector vec2 is: " << vec2[i] << endl;}
    cout<<endl;

    cout << "Elements of vector vec3:\n";    
    for(int i=0; i<3; i++){cout << i << " postion value of vector vec3 is: " << vec3[i] << endl;}

// vector funcitons
    // 1. size
    cout << "\nSize of vector vec2: " << vec2.size() << endl;

    // 2. push_back
    vec1.push_back(23);
    cout << "\nSize of vector vec1: " << vec1.size() << endl;
    cout << "Elements of vector vec1:\n";    
    for(int i=0; i<vec1.size(); i++){cout << i << " postion value of vector vec1 is: " << vec1[i] << endl;}

    // 3. pop_back  
    cout << "\n\nSize of vector vec2 before pop_back: " << vec2.size() << endl;
    vec2.pop_back();
    cout << "Size of vector vec2 after pop_back: " << vec2.size() << endl;
    cout << "\nElements of vector vec2:\n";    
    for(int i=0; i<vec2.size(); i++){cout << i << " postion value of vector vec2 is: " << vec2[i] << endl;}

    // 4. front
    cout << "\n\nFront value of vec2: " << vec2.front() << endl;

    // 5. back 
    cout << "\nBack value of vec2: " << vec2.back() << endl;

    //  6. at
    cout << "Size of vecotr vec3 is: " << vec3.size();
    cout << "\nElements at 2nd index of vec3 is: " << vec3.at(2) << endl;

    // 7. capacity
    cout << "\nCapacity of vector vec3 is: " << vec3.capacity() << endl;
    vec3.push_back(32);
    cout << "Capacity of vector vec3 is: " << vec3.capacity() << endl;
    cout << "Size of vector vec3 is: " << vec3.size() << endl;





    cout << endl << "Successful run\n0 code out"; return 0;
}
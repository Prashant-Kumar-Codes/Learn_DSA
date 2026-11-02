#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector <int> stackVector;
    int size = 10;

    public:
        bool overflow(){
            if(stackVector.size() >= size){
                cout << "Overflow" << endl;
                return true;
            }return false;
        }
        bool underflow(){
            if(stackVector.size() <= 0){
                cout << "Underflow" << endl;
                return true;
            }return false;
        }

        bool empty(){
            if(stackVector.size()==0){
                cout << "Empty" << endl;
            return true;
        }}

        int top(){return stackVector[stackVector.size()-1];}

        bool push(int x){
            if(!overflow()){
                stackVector.push_back(x);
                cout << "Successfully pushed the element " << x << endl;
                return true;
            }
            return overflow();
        }

        bool pop(){
            if(!underflow()){
                stackVector.pop_back();
                cout << "Successfully pop the last element" << endl;
                return true;
            }
        }

};

int main(){
    Stack s;

    int x = 1;
    while(!s.overflow()){s.push(x); x++;}
    while(!s.empty()){
        cout << "Top element: " << s.top() << endl;
        s.pop();
    }
    return 0;
}
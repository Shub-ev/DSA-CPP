#include<iostream>
#include<deque>
using namespace std;

// deque
// 1. can insert from Front and Back
// 2. can delete from Front and Back
// 3. random access

int main(){
    deque<int> d;

    d.push_back(1);         // inserting from front
    d.push_front(2);        // inserting from back

    for(auto b : d){
        cout<<b<<endl;
    }

    // d.pop_back();       // pop 1 element from back
    // d.pop_front();      // pop 1 element from front

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);

    cout<<d.at(2)<<endl;    // prints element at 2

    cout<<d.front()<<endl;
    cout<<d.back()<<endl; 

    cout<<d.empty()<<endl;   // returns true or false based on is empty or not

    d.erase(d.begin(),d.begin() + 2);
}
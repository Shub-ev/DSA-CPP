#include<iostream>
#include<list>
using namespace std;

// list STL
// implemented using double linked list
// random access is not possible

int main(){

    list<int> l;

    // list<int> cp(l);     // copy one list to another
    // list<int> pre(6,100);        // 6 elements with 100 in each

    l.push_back(1);
    l.push_back(3); 
    l.push_back(4);
    l.push_back(5);
    l.push_front(2);

    for(int i : l){         // iterate all element
        cout<<i<<" ";
    }

    auto a = l.begin();     // begin() or end() returns iterator

    l.erase(l.begin());     // .erase takes iterator and delete that element
    cout<<endl;

    for(int i : l){
        cout<<i<<" ";
    }

    return 0;
}
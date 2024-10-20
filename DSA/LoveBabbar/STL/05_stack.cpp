#include<iostream>
#include<stack>
using namespace std;

// STL stack
// push, pop, top

int main(){

    stack<int> stk;     // creates an int stack

    // cout<<stk.top()<<endl;       // this will give the exception

    stk.push(1);    // push new element in stack
    stk.push(2);
    stk.push(3);    // this element is on top of previous

    cout<<stk.top()<<endl;

    stk.push(4);
    stk.push(5);

    cout<<stk.top()<<endl;

    stk.pop();

    cout<<stk.top()<<endl;
    cout<<stk.size()<<endl;

    return 0;
}
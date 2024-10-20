#include<iostream>
#include<queue>
using namespace std;

// queue
// first in first out
// push, pop, first, last, size

int main(){

    queue<string> q;

    cout<<q.size()<<endl;

    q.push("Shubham");      // push element from back
    q.push("Mahesh");
    q.push("Gharage");

    cout<<q.size()<<endl;

    q.pop();        //  pop() dont have any return type so void

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;


    return 0;
}
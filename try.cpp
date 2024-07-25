#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> res(10);
    res.insert(10);

    int end = res.end();
    cout<<end<<endl;
}
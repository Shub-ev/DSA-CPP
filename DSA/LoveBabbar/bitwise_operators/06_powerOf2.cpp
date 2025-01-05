//Given an integer n, return true if it is a power of two. Otherwise, return false.
//An integer n is a power of two, if there exists an integer x such that n == 2x.

#include<iostream>
using namespace std;

bool isPower2(int n){
    int i = 1;
    while(i < 2e31 - 1){
        if(i == n) return true;
        else if (i > n) return false;
        cout<<i<< " ";
        i = i<<1;
    }

    return false;
}

int main(){
    int n;
    cin>>n;

    cout<<isPower2(n);
}
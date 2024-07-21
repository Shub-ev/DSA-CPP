//i/p = 3 (011)
//o/p = 2

#include<iostream>
using namespace std;

int setBits(int a, int b){
    int c = 0;
    while(a){
        c += (a&1) ? 1 : 0;
        a = a>>1;
    }
    while(b){
        c += (b&1) ? 1 : 0;
        b = b>>1;
    }
    return c;
}

int setBits(int n){
    int c = 0;
    while(n){
        c += (n&1) ? 1 : 0;
        n = n>>1;
    }
    return c;
}

int main(){
    int n;
    cin>>n;

    cout<<setBits(n)<<endl;
    int b;
    cin>>b;

    cout<<setBits(n, b)<<endl;
}
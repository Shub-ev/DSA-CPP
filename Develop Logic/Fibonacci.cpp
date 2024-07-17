#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a = 0;
    int b = 1;
    int c = 0;

    cout<<a<<" ";
    if(n >= 2){
        cout<<b<<" ";
    }

    for(int i = 2; i < n; i++){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}
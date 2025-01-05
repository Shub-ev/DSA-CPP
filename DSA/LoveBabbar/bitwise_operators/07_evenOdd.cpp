#include<iostream>
using namespace std;

void evenOdd(int n){
    cout<<((n&1) ? "Odd" : "Even");
}

int main(){
    int n;
    cin>>n;

    evenOdd(n);
}
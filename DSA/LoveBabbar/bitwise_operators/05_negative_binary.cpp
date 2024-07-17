//binary of negative numbers

#include<iostream>
using namespace std;

int neg_binary(int n){
    n = ~n;
    n = n+1;

    int res = 0;

    while(n > 0){
        res += (res * 10) + ()
    }
    return n;
}

int main(){
    int n;
    cin>>n;

    cout<<neg_binary(n);
}
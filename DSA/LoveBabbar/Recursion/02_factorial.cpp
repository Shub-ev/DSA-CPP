#include<iostream>
using namespace std;

long facto(int n){
    if(n == 1 || n == 0){
        return 1;
    }

    return n * facto(n-1);
}

int main(){
    long res = facto(5);
    cout<<res;
    return 0;
}
#include<iostream>
using namespace std;

int power_of_2(int n){
    if(n == 0){
        return 1;
    }

    return 2 * power_of_2(n-1);
}

int main(){
    int res = power_of_2(4);
    cout<<res;
    return 0;
}
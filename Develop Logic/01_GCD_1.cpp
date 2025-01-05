#include<iostream>
using namespace std;

int main(){
    int n1, n2, gcd = 0;

    cout<<"Enter 2 numbers : ";
    cin>>n1>>n2;

    for(int i = 2; i <= n1 && i <= n2; i++){
        if(n1%i ==0 && n2%i ==0){
            gcd = i;
        }
    }

    cout<<"GCD : "<<gcd<<endl;

    return 0;
}
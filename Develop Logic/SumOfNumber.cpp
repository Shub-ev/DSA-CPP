#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, i;
    cout<<"Enter number: ";
    cin>>n;

    i = 1;
    while(i <= n){
        sum += i;
        i++;
    }

    cout<<sum;
}
// 1 + 2 + 3 + 4 + 5

//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k = 1;
    for(int i = 1; i <= n; i++){
        k = i;
        for(int j = 0; j < i; j++){
            cout<<k<<" ";
            k--;
        }
        cout<<"\n";
    }
}
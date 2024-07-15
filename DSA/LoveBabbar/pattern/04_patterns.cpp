//1
//2 2
//3 3 3
//4 4 4 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout<<k<<" ";
        }
        k++;
        cout<<"\n";
    }
}
// 1 1 1 1 
// 2 2 2 
// 3 3
// 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout<<k<<" ";
        }
        cout<<"\n";
        k++;
    }
}
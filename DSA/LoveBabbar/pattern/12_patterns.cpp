// A
// B B
// C C C
// D D D D

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
}
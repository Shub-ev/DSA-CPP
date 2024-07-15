// A B C
// A B C
// A B C

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        char a = 'A';
        for(int j = 0; j < n; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
}
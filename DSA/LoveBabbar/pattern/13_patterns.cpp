// A
// C D
// E F G H
// I J K L M

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
}
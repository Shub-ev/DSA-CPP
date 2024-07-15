// D
// C D
// B C D
// A B C D

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        char a = 'D' - i;
        for(int j = 0; j < i; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
}
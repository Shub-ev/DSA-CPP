// 1 2 3
// 4 5 6
// 7 8 9

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int k = 1;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }
}
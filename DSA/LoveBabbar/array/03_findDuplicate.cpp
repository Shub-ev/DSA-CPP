#include<iostream>
#include<vector>
using namespace std;

void findDup(int a[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ a[i];
        if(ans == 0) cout<<ans<<" is repeated"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    findDup(arr, n);
}
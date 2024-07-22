#include<iostream>
#include<vector>
using namespace std;

int* findDup(int a[], int n){
    vector<int> res(n, 0);
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
#include<iostream>
using namespace std;

void reverseArr(int a[], int n){
    for(int i = 0, k = n-1; i < n/2, k > n/2; i++, k--){
        a[i] = a[i] + a[k];
        a[k] = a[i] - a[k];
        a[i] = a[i] - a[k];
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
    reverseArr(arr, n);

    cout<<"Array after reverse:"<<endl;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
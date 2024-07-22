#include<iostream>
using namespace std;

void reverseArr(int a[], int n){
    n = (n%2 == 0) ? n : n-1;
    for(int i = 0; i <= n-2; i += 2){
        a[i] = a[i] + a[i+1];
        a[i+1] = a[i] - a[i+1];
        a[i] = a[i] - a[i+1];
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
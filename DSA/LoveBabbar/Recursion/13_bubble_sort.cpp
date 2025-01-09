#include<iostream>
using namespace std;

void sort(int arr[], int n){
    if(n == 1 || n == 0) return;

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    return sort(arr, n - 1);
}

int main(){
    int arr[] = {6,4,2,1,5,0,3,7};

    sort(arr, 8);

    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int* selection_sort(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {6,1,2,5,8,3,6,2};

    int n = (sizeof(arr)/4);
    int *p = selection_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
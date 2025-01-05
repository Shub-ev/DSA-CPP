#include<iostream>
using namespace std;

void reverseArray1(int *arr, int n){
    for(int i = 0, j = n-1; i <= n/2 && j >= (n - n/2); i++, j--){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseOptimal(int *arr, int n){
    int s = 4, e = n-1;

    while(s <= e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {2,1,5,8,0,4,3}; 
    // reverseArray(arr, 7);
    reverseOptimal(arr, 7);
    return 0;
}
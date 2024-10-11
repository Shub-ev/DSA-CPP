// 2, 5, 1, 0, 4, 8

// here we put biggest element at last first then (n-1)th to n-1 th position 

// i.e. we push ith largest element to i th position from last

#include<iostream>
using namespace std;

int* bubbleSort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return arr;
};

int main(){
    int arr[] = {2,5,8,0,4,1};   //     2  1  0  4  5  8
    int n = sizeof(arr)/sizeof(int);
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }

    int *b = bubbleSort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<b[i]<<" ";
    }
}
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int m = s + (e-s)/2;

    int l1 = m - s + 1;
    int l2 = e - m;

    int *arr1 = new int[l1];
    int *arr2 = new int[l2];

    int mainIndex = s;

    for(int i = 0; i < l1; i++){
        arr1[i] = arr[mainIndex++];
    }
    for(int i = 0; i < l2; i++){
        arr2[i] = arr[mainIndex++];
    }

    mainIndex = s;
    int i = 0, j = 0;
    while(i < l1 && j < l2){
        if(arr1[i] < arr2[j]) arr[mainIndex++] = arr1[i++];
        else arr[mainIndex++] = arr2[j++];
    }
    while(i < l1){
        arr[mainIndex++] = arr1[i++];
    }
    while(j < l2){
        arr[mainIndex++] = arr2[j++];
    }

    delete []arr1;
    delete []arr2;
}

void merge_sort(int *arr, int s, int e){
    if(s>=e) return;

    int m = s + (e-s)/2;

    merge_sort(arr, s, m);
    merge_sort(arr, m+1, e);

    merge(arr, s, e);
}

int main(){
    int arr[] = {4,2,1,9,8,6,7,0,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    merge_sort(arr, 0, 9);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
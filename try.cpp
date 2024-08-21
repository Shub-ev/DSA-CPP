#include<iostream>
using namespace std;

int BinarySearch(int arr[], int k){
    int s = 0;
    int e = 8;
    int m = s + (e-s)/2;

    while(s <= e){
        if(arr[m] == k){
            return m;
        }
        else if(arr[m] < k){
            s = m + 1;
        }
        else{
            e = m - 1;
        }
        m = s + (e - s)/2;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int res = BinarySearch(arr, 2);
    cout<<res;
}
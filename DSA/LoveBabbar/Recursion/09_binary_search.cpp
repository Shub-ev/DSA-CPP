#include<iostream>
#include<vector>
using namespace std;

int binarySeach(vector<int>& arr, int s, int e, int t){
    if(s > e) return -1;

    int mid = s + (e-s)/2;

    if(arr[mid] == t) return mid;

    if(arr[mid] < t) return binarySeach(arr, mid + 1, e, t);
    else return binarySeach(arr, s, mid - 1, t);
}

int main(){
    vector<int> arr({1,2,3,4,5,6,7,8,9});

    int res = binarySeach(arr, 0, 8, 8);
    cout<<res;
}
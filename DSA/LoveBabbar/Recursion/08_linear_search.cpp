#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int k){
    if(size == 0) return -1;
    
    return k == arr[size-1] ? (size) : linear_search(arr, size-1, k);
}

int main() {
    int v[] = {1,2,3,4,5,6};
    int res = linear_search(v, 6, 1);
    cout<<res;
}
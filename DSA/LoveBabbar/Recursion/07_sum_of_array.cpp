#include <iostream>
using namespace std;

int arraySum(int arr[], int size){
    if(size == 0) return 0;
    
    return arr[size-1] + arraySum(arr, size-1);
}

int main() {
    int v[] = {1,2,3,4,5,6};
    int res = arraySum(v, 6);
    cout<<res;
}
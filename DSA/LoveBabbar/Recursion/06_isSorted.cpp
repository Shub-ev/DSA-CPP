// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1) return true;
    
    if(arr[0] > arr[1]) return false;
    else{
        return isSorted(arr+1, size-1);
    }
}

int main() {
    int v[] = { -1, 3, 1, 2, 3, 4};
    bool res = isSorted(v, 6);
    if(res){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
}
// find pivot element in a sorted and rotated array 
// i.e. [1,2,4,5,8,9] => [8,9,1,2,4,5] here 1 is pivot

#include<iostream>
using namespace std;

void findPivot(int* arr, int n){
    int s = 0;
    int e = n -1;
    int m = s + (e - s)/2;

    while(s < e){
        cout<<arr[s]<<endl;
        int m = s + (e - s) / 2;

        if(arr[m] > arr[e]){
            s = m + 1;
        } else {
            e = m;
        }
    }
    cout<<"Pivot is : "<<arr[s]<<endl;
}

int main(){
    int n = 0;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    findPivot(arr, n);
}
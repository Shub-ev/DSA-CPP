/*Given an array arr[] of n integers. Find the contiguous sub-array(containing 
at least one number) which has the maximum sum and return its sum.*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,-2,5};

    int sum = 0;
    int maxi = arr[0]; //contain atleast 1 no. (condition)

    for(int i = 0; i < 5; i++){
        sum += arr[i];
        maxi = max(maxi, sum);

        if(sum < 0) sum = 0;
    }

    cout<<maxi;
}
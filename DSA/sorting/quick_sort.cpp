// #include<iostream>
// using namespace std;

// int partition(int arr[], int l, int h){
//     int pivot = arr[l];
//     int i = l;
//     int j = h;

//     while(true){
//         while(i <= h && arr[i] <= pivot) i++;
//         while(arr[j] > pivot) j--;
//         if(i >= j) break;
//         swap(arr[i], arr[j]);
//     }
//     swap(arr[l], arr[j]);
//     return j;
// }

// void quickSort(int arr[], int l, int h){
//     if(l < h){
//         int pi = partition(arr, l, h);

//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, h);
//     }
// }

// int main(){
//     int arr[] = {9, 5, 2, 6, 3, 1};

//     quickSort(arr, 0, 5);

//     for(int i = 0; i < 6; i++){
//         cout<<arr[i]<<" ";
//     }
// }

int partition(int arr[], int l, int h){
    
}

void quickSort(int arr[], int l, int h){
    if(l < h){
        int pi = 
    }
}

int main(){
    int arr[] = {9, 5, 2, 6, 3, 1};

    quickSort(arr, 0, 5);

    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
}
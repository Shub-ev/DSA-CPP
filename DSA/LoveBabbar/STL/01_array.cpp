#include<iostream>
#include<array>         // STL array
using namespace std;

// STL uses similar implementation as normal array hence both are static 
// but STL array have some array methods

int main(){
    // int arr[4] = {1,2,3,4};      // normal homogeneous static array
    // arr.size();          // not possible

    array<int, 4> arr = { 1, 2, 3, 4 };    // this is STL array // this uses same above method for implementation and hence static
    // this is why we dont use this

    cout<<"size() on array from STL : "<<arr.size()<<endl;  // STL array have size() function
    
    for(int i = 0; i < 4; i++){
        // access STL array & normal [i] indexing is also valid
        cout<<arr.at(i)<<" ";      // gives garbage values
    }
    cout<<endl;

    cout<<"Empty or not -> "<<arr.empty()<<endl;
    cout<<"Front -> "<<arr.front()<<endl;
    cout<<"Back -> "<<arr.back()<<endl;

    return 0;
}
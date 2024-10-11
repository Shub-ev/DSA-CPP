#include<iostream>
#include<vector>
using namespace std;

// dynamic array (homogeneous) and gets double if capacity is full 

int main(){

    vector<int> a(5,1);   // vector of size 5 with 1 initialized to all
    vector<int> temp(a);   // transfer all items of a to temp

    vector<int> vec;


    vec.push_back(1);       // push a number from back
    cout<<vec.at(0)<<endl;      // prints the first element of vector

    cout<<"No of elements in Vec -> "<<vec.size()<<endl;     // prints number of elements in the vector (not memory assigned)
    cout<<"Capacity of Vec -> "<<vec.capacity()<<endl;     // prints number elements can be stored in vector before new mem is allocated

    vec.push_back(2);
    vec.push_back(3);

    cout<<"No of elements in Vec -> "<<vec.size()<<endl;
    cout<<"Capacity of Vec -> "<<vec.capacity()<<endl; 

    cout<<"front -> "<<vec.front()<<endl;
    cout<<"back -> "<<vec.back()<<endl; 

    vec.pop_back();     // removes element from back

    for(int n : a){
        cout<<n<<endl;
    }

    return 0;
}
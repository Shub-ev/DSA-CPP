#include<iostream>
using namespace std;

#define Instagram Followers
#define Followers 123

// chain macro means macro inside macro
// in this case parent macro are first expanded then child macro

int main(){
    cout<<"I have "<<Instagram<<"k followers in Instagram!";  
    // Instagram is first expanded then Followers macro is expanded
    return 0;
}
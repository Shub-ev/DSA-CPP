#include<iostream>
using namespace std;

int main(){
    //bitwise " & " (and operator) 0 & 1 == 0 ; 0 & 0 == 0; 1 & 1 == 1
    cout<<(4&5)<<endl; //100 & 101 == 100

    //bitwise " | " (or operator) 0 | 1 == 1 ; 0 & 0 == 0; 1 & 1 == 1
    cout<<(4|5)<<endl; //100 | 101 == 101

    //bitwise " ~ " (not operator) ~10 == 00000000001010 == 11111111110101 => 1's compliment => 00000000001010 => 2's complement => 00000000001011
    cout<<~10<<endl; //-11

    //bitwise " ^ " (xor operator) 4^5 == 100 ^ 101 == 001 == 1 //only one 1 is required
    cout<<(4^5)<<endl;

    //bitwise " << " (left shift operator) 5<<2 == 0000101 << 2 == 0010100 == 20
    cout<<(5<<2)<<endl;

    //bitwise " >> " (right shift operator) 8>>2 == 0001000 >> 2 == 00000010 == 2
    cout<<(8>>2)<<endl;
}
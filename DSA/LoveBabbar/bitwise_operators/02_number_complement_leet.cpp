/*
The complement of an integer is the integer you get when you flip
all the 0's to 1's and all the 1's to 0's in its binary representation.

Example 1:
Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Example 2:
Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
*/

#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int);

int main()
{
    int n;
    cin >> n;

    cout<<bitwiseComplement(n);
}

int bitwiseComplement(int n)
{
    int res = 0;
    int exp = 0;

    if(n == 0) return 1;
    
    while (n > 0)
    {
        res += (n & 1) ? 0 : pow(2, exp);
        exp++;
        n = n >> 1;
    }

    return res;
}
#include<iostream>
using namespace std;

int main(){
    // Arithmatic Operators (7 only)
    cout<<10 + 20<<endl;        // plus
    cout<<+20<<endl;            // unary plus
    cout<<10 - 20<<endl;        // minus
    cout<<-20<<endl;            // unary minus
    cout<<10 * 20<<endl;        // multiply
    cout<<10 / 20<<endl;        // divide
    cout<<10 % 20<<endl;        // mod / remainder

    // Comparisom operators (6 only)
    cout<<(10 == 20)<<endl;     // equal
    cout<<(10 != 20)<<endl;     // not equal
    cout<<(10 <= 20)<<endl;     // less or equal
    cout<<(10 >= 20)<<endl;     // greater or equal
    cout<<(10 < 20)<<endl;      // less than
    cout<<(10 > 20)<<endl;      // greater than

    // single assignment operator  (1 only)
    int num = 10;               // single assignment operator

    // compound assignment operator (10 only)
    num += 10;
    num -= 10;
    num *= 10;
    num /= 10;
    num %= 10;
    num &= 1;
    num |= 1;
    num ^= 4;
    num >>= 2;
    num <<= 2;

    // increment & decrement    (4 only)
    ++num;
    --num;
    num++;
    num--;
}
// to print something over console

// instructs compiler to include declarations of the standart stream "I/O" facilities as found in iosteam
#include<iostream>

int main(){
    // The operator << (‘‘put to’’ or ‘‘Intertion operator’’) writes its second argument onto its first
    // the string literal "Hello, World!\n" is written onto the standard output stream std::cout
    std::cout<<"Hello World!";

    // The std:: specifies that the name cout is to be found in the standard-library namespace

    // "Hello World!" is a string literal
    // a string literal is sequence of characters surrounded by ""
    // in string literal \ character followed by another character is called ’’Special Character’’
    // here ’’\n’’ is special character
}
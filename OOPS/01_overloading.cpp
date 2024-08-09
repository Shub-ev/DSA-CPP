//implementing class and its instance
#include<iostream>
using namespace std;

class Person{ // class is the template for the objects
    private:
        string name; // prperty declaration

    public:
        Person(string nm): name(nm){}; // constructor method (parameterized constructors)
        void displayName(); // method declaration
};

void Person:: displayName(){
    cout<<this->name;
}

int main(){
    Person p1 = Person("Shubham Gharage");  // instantiati0ng class
    p1.displayName(); // accessing method of the object
}
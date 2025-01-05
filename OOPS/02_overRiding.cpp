#include <iostream>
using namespace std;

class Animal
{
private:
    string sound = "No Sound";

public:
    void virtual sound1()
    {
        cout << "Sound is : " << this->sound<<endl;
    };
};

class Human : public Animal
{
public:
    void sound1() override
    {
        cout << "Human Talks";
    };
};

int main()
{
    Animal an;
    an.sound1();

    Human hm;
    hm.sound1();
}
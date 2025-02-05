#include <iostream>
#include <string>

#include "./timestamp_FF.h"

using namespace std;

class Animal {
public:
    string name;

    Animal(string name){
        this -> name = name;
    }

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

class Dog : public Animal {
public:
    // Chama o construtor da classe base 'Animal', com o parâmetro 'name'
    Dog(string name) : Animal(name) {}

    void Bark() {
        cout << "au! au!" << endl;
    }
};

int main() {

    meuCarimbo();
    
    Dog myDog("Eros");

    // Evoca o método da classe base.
    myDog.Eat();

    // Evoca o método da classe derivada.
    myDog.Bark();

    return 0;
}

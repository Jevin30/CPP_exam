#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() const = 0;  
    virtual void move() const = 0;   
};

class Dog : public Animal {
public:
    void sound() const override {
      cout << "Dog barks" << endl;
    }

    void move() const override {
      cout << "Dog walks" << endl;
    }
};

class Bird : public Animal {
public:
    void sound() const override {
        cout << "Bird chirps" << endl;
    }
    void move() const override {
        cout << "Bird flies" << endl;
    }
};

int main() {
    Dog dog;
    Bird bird;

    Animal* animals[2];
    animals[0] = &dog;
    animals[1] = &bird;

    for (int i = 0; i < 2; ++i) {
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    return 0;
}


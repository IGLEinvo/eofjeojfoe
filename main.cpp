#include <iostream>
#include <string>

using namespace std;

class Animal {
public:

    virtual void out() = 0;
};

class Flying :public Animal{
public:

    virtual void out() = 0;
};

class Terrestrial: public Animal {
public:

    virtual void out() = 0;
};

class Floating : public Animal {
public:

    virtual void out() = 0;
};

class Mammal : public Terrestrial {
public:

    void out() {
        cout << "Ссавці" << endl;
    }
};

class Bird : public Flying {
public:

    void out() {
        cout << "Птахи" << endl;
    }
};

class Insects :public Flying {
public:

    void out() {
        cout << "Комахи" << endl;
    }
};

class Reptile :public Terrestrial {
public:

    void out() {
        cout << "Плазуни" << endl;
    }
};

class Fish :public Floating {
public:

    void out() {
        cout << "Риби" << endl;
    }
};

int main() {
    Mammal* ma = new Mammal;
    Bird* bi = new Bird;
    Insects* ins = new Insects;
    Reptile* rep = new Reptile;
    Fish* fi = new Fish;
    Animal* mas[5];
    mas[0] = ma;
    mas[1] = bi;
    mas[2] = ins;
    mas[3] = rep;
    mas[4] = fi;
    for (int i = 0; i < 5; i++)
    {
        mas[i]->out();
    }

    return 0;

}
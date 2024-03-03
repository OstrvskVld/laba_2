#ifndef LAB_2_CLIENTS_H
#define LAB_2_CLIENTS_H
#include <iostream>
#include <string>

using namespace std;

class Clients {
private:
    string name;
    int age;
    bool buyOfCar;
    bool credit;
    string carmake;

    // Static field (belongs to the class)
    static int clients;
public:
    Clients();
    Clients(int age);
    Clients(string name, int age, bool buyOfCar, bool credit, string carMake);

    string carsMake();
    void init(string name, int age, bool buyOfCar, bool credit, string carMake);

    static int countOfClients() { return clients; };

    // Deep copy from header
    Clients(const Clients& other);

    // Overloading the "+" operator (unary)
    Clients operator + () const
    {
        return Clients (age + 1);
    }

    // Overloading the "+" operator (binary)
    Clients operator + (const Clients& other) const
    {
        return Clients (age + other.age);
    }

    string showUnary() const { return "Age: " + to_string(age); };
    string showBinary() const { return "Age: " + to_string(age); };

    friend istream &operator >> (istream &is, Clients &obj)
    {
        return is >> obj.name >> obj.age >> obj.buyOfCar >> obj.credit >> obj.carmake;
    };
    friend ostream &operator << (ostream &os, Clients &obj)
    {
        return os << obj.name << endl << obj.age << endl << obj.buyOfCar << endl << obj.credit << endl << obj.carmake;
    };

    ~Clients();
};

#endif

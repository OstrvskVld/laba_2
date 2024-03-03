#include "clients.h"
// Initializing a static field
int Clients::clients = 0;

Clients::Clients() : name(""), age(0), buyOfCar(false), credit(false), carmake("")
{
    clients++;
}


Clients::Clients(int age)
{
    this->age = age;
}

Clients::Clients(string name, int age, bool buyOfCar, bool credit, string carMake)
{
    clients++;

    this->name = name;
    this->age = age;
    this->buyOfCar = buyOfCar;
    this->credit = credit;
    this->carmake = carmake;
}

// Deep copy
Clients::Clients(const Clients& other)
    : name(other.name), age(other.age), buyOfCar(other.buyOfCar), credit(other.credit), carmake(other.carmake)
{
    clients++;

    cout << "Deep copy constructor is called" << endl;
}

Clients::~Clients()
{
    clients--;

    cout << "Destructor is here." << endl;
}

void Clients::init(string name, int age, bool buyOfCar, bool credit, string carMake) {
    this->name = name;
    this->age = age;
    this->buyOfCar = buyOfCar;
    this->credit = credit;
    this->carmake = carmake;
}
string Clients::carsMake() {
    string str = "Name: " + name + "\t" + "Age: " + to_string(age) + "\t";

    if (buyOfCar) {
        str += "Car purchased: ";
        if (carmake.empty()) {
            cout << "Enter car make: ";
            getline(cin, carmake);
        }
        str += carmake + "\t";
    } else {
        str += "No car purchased\t";
    }

    str += "Credit: ";
    str += credit ? "Yes" : "No";

    return str;
}
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

public:
    Clients() : name(""), age(0), buyOfCar(false), credit(false), carmake("") {}
    Clients(string name, int age, bool buyOfCar, bool credit, string carMake) {
        this->name = name;
        this->age = age;
        this->buyOfCar = buyOfCar;
        this->credit = credit;
        this->carmake = carmake;
    }

    string carMake() {
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

    void init(string name, int age, bool buyOfCar, bool credit, string carMake) {
        this->name = name;
        this->age = age;
        this->buyOfCar = buyOfCar;
        this->credit = credit;
        this->carmake = carmake;
    }

    ~Clients() {
        cout << "Destructor is here." << endl;
    }
};

#endif

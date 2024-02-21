#ifndef LAB_2_AUTO_H
#define LAB_2_AUTO_H
#include <iostream>
#include <string>

using namespace std;

class Auto{
private:
    string name;
    int age;
    bool typeOfFuel, availability;
public:

    Auto(){};
    Auto(string name){
        this->name = name;
    };
    Auto(string name, int age) : Auto(name){
        this->age = age;
    };
    Auto(string name, int age, bool typeOfFuel) : Auto(name,age){
        this->typeOfFuel = typeOfFuel;
    };
    Auto(string name, int age, bool typeOfFuel, bool availability) : Auto(name,age,typeOfFuel){
        this->availability = availability;
    };
    string ShowOfAuto() {
        string str;

        str = "Name: " + name + "\t" + "Age: " + to_string(age) + "\t";

        switch(typeOfFuel) {
            case 0:
                str = str + "Type of fuel: Diesel" + "\t";
                break;
            case 1:
                str = str + "Type of fuel: Gas" + "\t";
                break;
            case 2:
                str = str + "Type of fuel: Petrol" + "\t";
                break;
        }

        switch(availability) {
            case 0:
                str = str + "Availability: Yes" + "\t";
                break;
            case 1:
                str = str + "Availability: No" + "\t";
                break;
        }

        cout << "\n" << "Constructor is here." << endl;
        return str;

    };
    void init(string name, int age, bool typeOfFuel, bool availability)
        {
            this -> name = name;
            this -> age = age;
            this -> typeOfFuel = typeOfFuel;
            this -> availability = availability;
        }
    ~Auto() {
        cout << "Destructor is here." << endl;
    }
};


#endif
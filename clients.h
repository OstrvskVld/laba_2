#ifndef LAB_2_CLIENTS_H
#define LAB_2_CLIENTS_H
#include <iostream>
using namespace std;
class Clients{
private:
    string name;
    int age;
    bool buyOfCar, credit;
public:
    Clients(){};
    Clients(string name, int age,bool buyOfCar,bool credit);
    string carMake (){
        string str;
        str = "Name: " + name + "\t" + "Age: " + to_string(age) + "\t";
        switch(buyOfCar) {
            case 0:
                str = str + "was not purchased" + "\t";
                break;
            case 1:
                str = str + "it was bought:" + "\t";
                break;
        }


        switch(credit) {
            case 0:
                str = str + "Credit: Yes" + "\t";
                break;
            case 1:
                str = str + "Credit: No" + "\t";
                break;
        }


        cout << "\n" << "Constructor is here." << endl;
        return str;

    };

    void init(string name, int age, bool buyOfCar, bool credit)
    {
        this-> name = name;
        this->age = age;
        this->buyOfCar = buyOfCar;
        this->credit = credit;
    }

    ~Clients() {
        cout << "Destructor is here." << endl;
    }
};
Clients::Clients(string name, int age, bool buyOfCar, bool credit) {
    this->name = name;
    this->age = age;
    this->buyOfCar = buyOfCar;
    this->credit = credit;
};



#endif

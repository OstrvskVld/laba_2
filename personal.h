#ifndef LAB_2_PERSONAL_H
#define LAB_2_PERSONAL_H
#include <iostream>
#include <string>

using namespace std;

class Personal{
private:
    string name;
    string placeOfBirth;
    int dataOfBirth;
    int salary;
    bool femaleMale;
public:
    Personal(){};
    Personal(string name){
        this->name = name;
    };
    Personal(string name, string placeOfBirth){
        this->name = name;
        this-> placeOfBirth = placeOfBirth;
    }
    Personal(string name, string placeOfBirth, double dataOfBirth){
        this->name = name;
        this-> placeOfBirth = placeOfBirth;
        this->dataOfBirth = dataOfBirth;
    }
    Personal(string name, string placeOfBirth, double dataOfBirth, double salary){
        this->name = name;
        this-> placeOfBirth = placeOfBirth;
        this->dataOfBirth = dataOfBirth;
        this->salary = salary;
    }

     Personal(string name, string placeOfBirth, double dataOfBirth, double salary, bool femaleMale);
    string person (){
        string str;
        str = "Name: " + name + "\t" "Place of birth:" + "\t" + placeOfBirth + "\t" + "Data of birth: " + to_string(dataOfBirth)
                +"\t" + "Salary:" + "\t" + to_string(salary) + "\t";
        switch(femaleMale) {
            case 0:
                str = str + "Male" + "\t";
                break;
            case 1:
                str = str + "Female" + "\t";
                break;
        }
        cout << "\n" << "Constructor is here." << endl;
        return str;
    };
    void init(string name, string placeOfBirth, double dataOfBirth, double salary, bool femaleMale)
    {
        this-> name = name;
        this->dataOfBirth = dataOfBirth;
        this->placeOfBirth = placeOfBirth;
        this->salary = salary;
        this->femaleMale = femaleMale;
    }


    // Shallow copy
    Personal(const Personal& other)
            : name(other.name), dataOfBirth(other.dataOfBirth), placeOfBirth(other.placeOfBirth),
            salary(other.salary), femaleMale(other.femaleMale)
    {
        cout << "Shallow copy constructor is called" << endl;
    }

    ~Personal(){
        cout << "Destructor is here." << endl;
    }
};

     Personal::Personal(string name, string placeOfBirth, double dataOfBirth, double salary, bool femaleMale) {
    this-> name = name;
    this->dataOfBirth = dataOfBirth;
    this->placeOfBirth = placeOfBirth;
    this->salary = salary;
    this->femaleMale = femaleMale;
};




#endif
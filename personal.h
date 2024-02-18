#ifndef LAB_2_PERSONAL_H
#define LAB_2_PERSONAL_H
#include <iostream>
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
    Personal(string name, string placeOfBirth, double dataOfBirth, double salary, bool femaleMale);
    string person (){
        string str;
        str = "Name: " + name + "\t" "Place of birth:" + placeOfBirth + "\t" + "Data of birth: " + to_string(dataOfBirth)
                +"\t" + "Salary:" + to_string(salary) + "\t";
        switch(femaleMale) {
            case 0:
                str = str + "Male" + "\t";
                break;
            case 1:
                str = str + "Female:" + "\t";
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
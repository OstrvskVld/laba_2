#include <iostream>
#include "auto.h"
#include "clients.h"
#include "personal.h"

int main() {

    Auto Automb[3];
    Automb[0].init("UAZ", 2023,1,0 );
    Automb[1].init("Matiz",2002, 1, 1);
    Automb[2].init("Passat B6",1999, 0, 0);
    // Creating a constant object
    const Auto Automb1 {Auto("Lanos", 2001,2,0)};




    cout << Automb[1].ShowOfAuto() << endl << Automb1.ShowOfAuto() << endl << Automb[2].ShowOfAuto() << endl << endl;



    Personal MyTeam[3];

    MyTeam[1].init("Nastia","Nikopol",2005,15000,0);
    cout << MyTeam[1].person() << endl;



    MyTeam[0].init("Vova", "Kiev", 2004, 22300,0);

    Personal PersonalNew{MyTeam[0]};
    cout << MyTeam[0].person() <<  PersonalNew.person() << endl << endl << endl;

    Auto AutoMove = move(Automb[0]);
    cout << Automb[0].ShowOfAuto() << endl << AutoMove.ShowOfAuto() << endl << endl << endl;



    cout << "Count of clients: " << Clients::countOfClients() << endl;
    Clients OurLove[3];

    OurLove[1].init("Maks",2006,0,1,"");

    cout << OurLove[1].carsMake() << endl;

    cout << "Count of clients: " << Clients::countOfClients() << endl;

    OurLove[2].init("Arsen",2004,1,1,"");
    cout << OurLove[2].carsMake() << endl;

    cout << "Count of clients: " << Clients::countOfClients() << endl;
    OurLove[1].~Clients();
    cout << "Count of clients: " << Clients::countOfClients() << endl;

    OurLove[0].init("Vlad", 2005, 0, 1, "Lanos");

    cout << OurLove[0].carsMake() << endl;

    cout << "Count of clients: " << Clients::countOfClients() << endl;
    OurLove[0].~Clients();

    Clients ClientMax{OurLove[0]};
    cout << ClientMax.carsMake() << endl;
    cout << "Count of clients: " << Clients::countOfClients() << endl;

    Clients ClientOper1(15);
    Clients ClientOper2(22);

    Clients ClientOperOut1 = +ClientOper1;
    cout << ClientOperOut1.showUnary() << endl;

    Clients ClientsOperOut2 = ClientOper1 + ClientOper2;
    cout << ClientsOperOut2.showBinary() << endl;

    Clients Client7;
    cin >> Client7;
    cout << Client7;

    return 0;
}

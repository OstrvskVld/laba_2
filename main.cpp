#include <iostream>
#include "auto.h"
#include "clients.h"
#include "personal.h"

int main() {

    Auto Automb[3];

    Automb[1].init("Matiz",2002, 1, 1);
    Automb[2].init("Passat B6",1999, 0, 0);


    cout << Automb[1].ShowOfAuto() << endl << Automb[2].ShowOfAuto() << endl;

    Clients OurLove[3];

    OurLove[1].init("Maks",2006,1,1);
    cout << OurLove[1].carMake() << endl;

    Personal MyTeam[3];

    MyTeam[1].init("Nastia","Nikopol",2005,15000,1);
    cout << MyTeam[1].person() << endl;

    return 0;
}

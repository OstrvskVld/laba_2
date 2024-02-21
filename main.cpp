#include <iostream>
#include "auto.h"
#include "clients.h"
#include "personal.h"

int main() {

    Auto Automb[3];

    Automb[1].init("Matiz",2002, 1, 1);
    Automb[2].init("Passat B6",1999, 0, 0);
    Auto Automb1 {Auto("Lanos", 2001,2,0)};



    cout << Automb[1].ShowOfAuto() << endl << Automb1.ShowOfAuto() << endl << Automb[2].ShowOfAuto() << endl;

    Clients OurLove[3];

    OurLove[1].init("Maks",2006,1,1,"");
    OurLove[2].init("Arsen",2004,1,1,"");
    cout << OurLove[1].carMake() << endl << OurLove[2].carMake() << endl;

    Personal MyTeam[3];

    MyTeam[1].init("Nastia","Nikopol",2005,15000,0);
    cout << MyTeam[1].person() << endl;

    return 0;
}

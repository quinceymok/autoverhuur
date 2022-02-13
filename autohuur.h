//
// Created by xquin on 09/02/2022.
//

#ifndef HPP_AUTOHUUR_H
#define HPP_AUTOHUUR_H
#include "auto.h"
#include "Klant.h"
#include <iostream>

class AutoHuur {
    // private
    private:
    int aantal_dagen;
    Klant huurder;
    Auto gehuurde_auto;
    // public
public:
    AutoHuur(Auto autoo, Klant huurder, int dagen);
    double totaal_prijs();

    // accessor
    Auto get_gehuurde_auto();
    Klant get_huurder();

    //mutator
    void set_aantal_dagen(int d);
    void set_gehuurde_auto(Auto autoo);
    void set_huurder(Klant huurder);

friend std::ostream& operator<<(std::ostream& os, AutoHuur& mc);
};


#endif //HPP_AUTOHUUR_H

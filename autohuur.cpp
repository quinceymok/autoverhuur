//
// Created by xquin on 09/02/2022.
//

#include "autohuur.h"
#include "auto.h"
#include "Klant.h"


//private
AutoHuur::AutoHuur(Auto autoo, Klant huurder, int dagen) : gehuurde_auto(autoo), huurder(huurder), aantal_dagen(dagen) {

}
//public
double AutoHuur::totaal_prijs() {
    return aantal_dagen * gehuurde_auto.get_prijs_per_dag() * huurder.get_korting();

}
// accessor
Auto AutoHuur::get_gehuurde_auto() {
    return gehuurde_auto;
}

Klant AutoHuur::get_huurder() {
    return huurder;

}
//mutator
void AutoHuur::set_aantal_dagen(int d) {
    aantal_dagen = d;
}

void AutoHuur::set_gehuurde_auto(Auto autoo) {
    gehuurde_auto = autoo;
}

void AutoHuur::set_huurder(Klant huurder) {
    huurder = huurder;
}

// to_string()
std::ostream& operator<<(std::ostream& os, AutoHuur& mc)

//{
//    os << "\n"  "op de naam van: " << mc.huurder << "\n" << mc.aantal_dagen << " en dat kost : " << mc.get_gehuurde_auto();
//    return os;
//}

{
    os << "\n" "autotype: " << mc.get_gehuurde_auto() << "\n" "op de naam van: " << mc.huurder <<
    "\n" "aantal dagen: "  << mc.aantal_dagen << " en dat kost: " << mc.totaal_prijs();
    return os;

}

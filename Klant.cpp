//
// Created by xquin on 09/02/2022.
//

#include "Klant.h"



Klant::Klant(std::string naam) : naam(naam) {

}

// accessor
double Klant::get_korting() {
    return korting_percentage;
}
//mutator
void Klant::set_korting(double percentage) {
    korting_percentage = percentage;
}

std::ostream& operator<<(std::ostream& os, Klant& mc)
{
    os << mc.naam << " " << "korting : " << mc.get_korting();
    return os;
}







//
// Created by xquin on 09/02/2022.
//

#include "auto.h"


//implementatie constructor
Auto::Auto(std::string type, double prijs_per_dag) : type(type), prijs_per_dag(prijs_per_dag) {

}

double Auto::get_prijs_per_dag() {
    return prijs_per_dag;
}

void Auto::set_prijs_per_dag(double percentage) {
    prijs_per_dag = percentage;
}


std::ostream& operator<<(std::ostream& os, Auto const & mc)
{
    os << mc.type << " met prijs per dag : " <<  mc.prijs_per_dag;
    return os;
}






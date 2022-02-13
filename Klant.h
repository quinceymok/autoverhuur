//
// Created by xquin on 09/02/2022.
//

#ifndef HPP_KLANT_H
#define HPP_KLANT_H

#include <iostream>

class Klant {
    // private
private:
    std::string naam;
    double korting_percentage = 0;

    // public
public:
    Klant(std::string naam);

    //accessor
    double get_korting();

    //mutator
    void set_korting(double percentage);

    friend std::ostream& operator<<(std::ostream& os, Klant& mc);

};

#endif //HPP_KLANT_H

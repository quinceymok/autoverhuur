//
// Created by xquin on 09/02/2022.
//

#ifndef HPP_AUTO_H
#define HPP_AUTO_H

#include <iostream>

class Auto {
    // private
    private:
    std::string type;
    double prijs_per_dag;

    // public
    public:
    Auto(std::string type, double prijs_per_dag);

    // accessor
    double get_prijs_per_dag();
    // mutator
    void set_prijs_per_dag(double percentage);


friend std::ostream& operator<<(std::ostream& os, Auto const & mc);

};


#endif //HPP_AUTO_H

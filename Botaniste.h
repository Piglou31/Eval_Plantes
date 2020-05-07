#ifndef BOTANISTE_H
#define BOTANISTE_H

#include "Plante.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>



class Botaniste{
    private:
    
    std::string _name;
    int _argent;
    std::vector<Plante*> _jardin;

public:

    
    void nourrir(Plante * cible);
    void couper(Plante * cible);
    void arroser(Plante * cible);
    void acheter();
    void vendre(Plante * cible);


    Botaniste(std::string name);

};


#endif
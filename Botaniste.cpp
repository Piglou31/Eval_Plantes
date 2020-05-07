#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include "Botaniste.h"
#include "Plante.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>


void Botaniste::nourrir(Plante * cible){
        cible->nourrir(1);
    }
    
    void Botaniste::couper(Plante * cible){
        cible->couper(1);
    }
    
    void Botaniste::arroser(Plante * cible){
        cible->arroser(1);    
    }

    void Botaniste::acheter(){
        _argent -= 10;
        int nombre_aleatoire = rand()%3;

        if (nombre_aleatoire == 0){
            

        }
    }
    void Botaniste::vendre(Plante * cible){
        
    };


    Botaniste::Botaniste(std::string Name): _name(Name) {}

#endif
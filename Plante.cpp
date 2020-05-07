#ifndef PLANTE.CPP
#define PLANTE.CPP


#include <iostream>
#include "Plante.h"

    //int _engrais; int _coupe; int _hydrate; _maturite

    void Plante::nourrir(int engrais){
         _engrais += engrais; }
    
    void Plante::couper(int coupe){
        _coupe += coupe; }
    
    void Plante::arroser( int hydrate){
        _hydrate += hydrate;  }

    void Plante :: pousser(){

        if (_engrais>5 && _coupe<5 && _hydrate>5){
            _maturite+=1;
        }
    }

    void Plante:: analyser(){
        std::cout << "c'est un/une" << _espece << " qui a une coupe de  " 
                << _coupe << "/10, une hydratation de "
                << _hydrate << "/10, et a encore " << _engrais << "/10 d'engrais." << std::endl;
    }

    

    Plante::Plante(): _engrais(5), _coupe(5), _hydrate(5), _maturite(1) {}


#endif
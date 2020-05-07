#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"


class Fleur: public Plante{
  protected:
    int _engrais;
    int _coupe;
    int _hydrate;
    int _maturite;
    std::string _espece;
    int _prixV;

  
  public:
    
    void virtual nourrir(int engrais);
    void virtual couper(int coupe);
    void virtual arroser(int hydrate);
    void virtual pousser();
    void virtual analyser();
    
    void afficher();
    
    
    
};



#endif
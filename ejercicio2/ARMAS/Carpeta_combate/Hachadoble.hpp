#pragma once
#include "Armascombate.hpp"

class Hachadoble: public Armascombate
{
private:
    int extraFilo; //daña mucho por ser doble filo 
    int filo_simple;
public:
    
    Hachadoble(int extraFilo, int filosimple);
    
    //metodo de la abstracta 
    void golpeEspecial() override; //se usan los dos filos de cada ala del hacha potenciados 
    int afilar(); //la afilo
    int desafilar(); //se usa el arma 

    
    ~Hachadoble()= default;
};

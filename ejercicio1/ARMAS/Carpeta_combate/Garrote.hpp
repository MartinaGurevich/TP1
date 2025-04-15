#pragma once
#include "Armascombate.hpp"

class Garrote: public Armascombate
{
private:
    int Dureza; //Puede dañar armaduras, se suma al daño
public:
    
    Garrote(string nombre, string compatibilidad,int modelo, int peso, int dureza);
    
    //metodo de la abstracta 
    void golpeEspecial() override; //si la dureza es 20kg entonces hace golpe especial 
    int daño_basico(); //si la dureza es menos que 20

    
    ~Garrote()= default;
};

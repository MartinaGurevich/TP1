#pragma once
#include "Armascombate.hpp"

class Lanza: public Armascombate
{
private:
    int profundidad_lanza; //Puede dañar armaduras, se suma al daño
public:
    
    Lanza(string nombre, string compatibilidad,int modelo, int peso);
    
    //metodo de la abstracta 
    void golpeEspecial() override; //se usan los dos filos de cada ala del hacha potenciados 
    int daño_basico();

    
    ~Lanza()= default;
};

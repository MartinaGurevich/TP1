#pragma once
#include "Armascombate.hpp"

class Lanza: public Armascombate
{
private:
    int profundidad_lanza; //Puede perforar armaduras, aumenta el daño
public:
    
    Lanza(string nombre, string compatibilidad,int modelo, int peso);
    
    //metodo de la abstracta 
    void golpeEspecial() override; //se usa el poder de perforar armaduras
    int daño_basico();

    
    ~Lanza()= default;
};

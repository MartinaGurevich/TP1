#pragma once
#include "Armascombate.hpp"

class Espada: public Armascombate
{
private:
    int Aumenta_longitud; //daña mas por ser una empada mas grande
    int filo;
public:
    
    Espada(string nombre, string compatibilidad,int modelo, int peso);
    
    //metodo de la abstracta 
    void golpeEspecial() override; //se usan los dos filos de cada ala del hacha potenciados 
    int afilar(); //la afilo
    int golpe();
    int getFilo();

    
    ~Espada()= default;
};

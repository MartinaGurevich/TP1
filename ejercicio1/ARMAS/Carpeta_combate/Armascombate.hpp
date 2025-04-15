#pragma once
#include "../interfazArmas.hpp"
#include <ostream>
#include <iostream>

class Armascombate: public Armas
{
protected:
    string nombre;
    int daño;
    int peso;
    int modelo;
    string tipodeArma;
    string compatibilidad; 
public:
    
    Armascombate(string nombre, string tipodeArma,  int daño, int modelo, int peso, string compatibilidad);

    virtual void golpeEspecial()=0 ; //cada arma puede tener su propio golpe especial
    
    void setDaño(int nuevodaño);
    bool compatible(string compatibilidad); //baja el poder de daño si el arma no es compatible con mago o guerrero
    
    int getpeso() override;
    int getDaño()override;
    string getNombre() override;
    void aumentarDaño() override;
    int getModelo() override;
    string getTipodearma() override;

    ~Armascombate()=default;
};


#pragma once
#include "../interfazArmas.hpp"
#include <ostream>
#include <iostream>

class Armascombate: public Armas
{
private:
    string nombre;
    int daño;
    int peso;
    int modelo;
    string tipodeArma; 
public:
    
    Armascombate(string nombre, string tipodeArma,  int daño, int peso, int modelo);

    virtual void golpeEspecial()=0 ; //cada arma puede tener su proopio golpe especial
    
    void setDaño(int nuevodaño);
    int getDaño()override;
    int getpeso() override;
    string getNombre() override;
    void aumentarDaño() override;
    int getModelo() override;
    string getTipodearma() override;

    ~Armascombate()=default;
};


#pragma once
#include "../interfazArmas.hpp"
#include <ostream>
#include <iostream>

using namespace std;

class ItemsMagicos: public Armas//clase abstracata 
{
private:
    string nombre;
    int daño;
    int peso;
    int modelo;
    string tipodeArma; 

public:
 
    //metodo virtual puro de esta clase abstracta 
    virtual void aplicarEfectoMagico()=0; //le aplico 

    ItemsMagicos(string nombre, string tipodeArma, int daño, int peso, int modelo);
    void setDaño(int nuevodaño);//metodo de la clase abstarcta
    
    int getDaño ()override; 
    int getpeso() override;
    string getNombre() override;
    void aumentarDaño() override;
    int getModelo() override;
    string getTipodearma() override;
   
    virtual ~ItemsMagicos()= default;
};



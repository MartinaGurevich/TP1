#pragma once 
#include <iostream>
#include <memory>
#include <string>
#include "../ARMAS/interfazArmas.hpp" //para que los personajes hagan uso de las mismas

using namespace std;

class Personajes
{
public:
    virtual pair<shared_ptr<Armas>,shared_ptr<Armas>> getArmas() const=0;  //le doy la posibilidad a todos los persoajes de tener dos armas
    virtual string getNombre()= 0;//mago o guerrero
    virtual int getSalud()= 0;//dañogenerado
    virtual void atacar(Personajes& objetivo_de_ataque)= 0; //saco vida a otro
    virtual void Recibir_daño()= 0; //me saca vida
    virtual void curar()=0; //regenero vida
    virtual void mostrarInfo()= 0;  //muestro datos actuales del personaje
    virtual void setDaño_obtenido(int daño) =0;
    virtual ~ Personajes()= default;
};

#pragma once
#include "Magos.hpp"

class Hechicero : public Magos
{
private:
    //int Acumulo_hechizo;// lanza hechizo cuado el ataque es muy fuerte. 
    int escudo; 
public:
    Hechicero(string nombre,int nivel,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void Escudomagico() override; 
    //void Lanzarechizo(Personajes& objetivo);

    ~Hechicero()= default;
};


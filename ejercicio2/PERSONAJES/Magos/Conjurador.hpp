#pragma once
#include "Magos.hpp"

class Conjurador : public Magos
{
private:
    //int Acumulo_hechizo;// lanza hechizo cuado el ataque es muy fuerte. 
    int escudo;
    int conjuro;
public:
    Conjurador(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void Escudomagico() override; 
    int lanzoconjuro(Personajes& objetivo); //le saca mas vida al contrincante
    

    ~Conjurador()= default;
};

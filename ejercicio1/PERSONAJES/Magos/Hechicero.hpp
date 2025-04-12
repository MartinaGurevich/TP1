#pragma once
#include "Magos.hpp"

class Hechicero : public Magos
{
private:
    int escudo_hechizo; 
public:
    Hechicero(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void Escudomagico() override; 

    ~Hechicero()= default;
};


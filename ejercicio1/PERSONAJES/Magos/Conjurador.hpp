#pragma once
#include "Magos.hpp"

class Conjurador : public Magos
{
private:
    int conjuro;
public:
    Conjurador(string nombre, pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS);

    void Escudomagico() override; 
    void conjurando(); //baja el daño ejercido

    ~Conjurador()= default;
};

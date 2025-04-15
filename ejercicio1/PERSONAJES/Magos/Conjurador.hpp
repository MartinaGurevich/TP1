#pragma once
#include "Magos.hpp"

class Conjurador : public Magos
{
private:
    int conjuro;
public:
    Conjurador(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void Escudomagico() override; 
    void conjurando(); //baja el daño ejercido

    ~Conjurador()= default;
};

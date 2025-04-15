#pragma once
#include "Guerreros.hpp"

class Mercenario : public Guerreros
{
private:
    int Defensa_oportunista; //actua para reducir daño
public:
    Mercenario(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override; 
    void usar_defensa();

    ~Mercenario()= default;
};

#pragma once
#include "Guerreros.hpp"

class Gladiador : public Guerreros
{
private:
    int Resistencia; //actua para reducir daño
public:
    Gladiador(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override; 

    ~Gladiador()= default;
};

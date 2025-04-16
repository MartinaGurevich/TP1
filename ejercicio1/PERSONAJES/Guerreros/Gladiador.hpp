#pragma once
#include "Guerreros.hpp"

class Gladiador : public Guerreros
{
private:
    int Resistencia; //actua para reducir daño
public:
    Gladiador(string nombre,  pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override;
    void usar_resistencia(); 

    ~Gladiador()= default;
};

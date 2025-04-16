#pragma once
#include "Guerreros.hpp"

class Caballero : public Guerreros
{
private:
    int altaDefensa; //actua para reducir daño
public:
    Caballero(string nombre,  pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override;
    void usar_AltaDefensa(); 

    ~Caballero()= default;
};


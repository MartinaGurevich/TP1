#pragma once
#include "Guerreros.hpp"

class Caballero : public Guerreros
{
private:
    int altaDefensa; //actua para reducir daño
public:
    Caballero(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override; 

    ~Caballero()= default;
};

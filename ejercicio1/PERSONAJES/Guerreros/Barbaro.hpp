#pragma once
#include "Guerreros.hpp"

class Barbaro : public Guerreros
{
private:
    int furia; //actua para reducir daño
public:
    Barbaro(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override; 

    ~Barbaro()= default;
};

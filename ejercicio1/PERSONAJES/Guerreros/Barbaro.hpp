#pragma once
#include "Guerreros.hpp"

class Barbaro : public Guerreros
{
private:
    int furia; //actua para reducir daño
public:
    Barbaro(string nombre,  pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override;
    void usar_furia(); 

    ~Barbaro()= default;
};

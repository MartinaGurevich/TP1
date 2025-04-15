#pragma once
#include "Guerreros.hpp"

class Paladin : public Guerreros
{
private:
    int Luz_purificadora; //actua para reducir daño, elimina maldiciones excesivas
public:
    Paladin(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void ArmaduraEspecial() override;
    void usar_luz();

    ~Paladin()= default;
};

#pragma once
#include "Magos.hpp"

class Hechicero : public Magos
{
private:
    int escudo_hechizo; 
public:
    Hechicero(string nombre,  pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS);

    void Escudomagico() override;
    void hechizoAudaz(); 

    ~Hechicero()= default;
};


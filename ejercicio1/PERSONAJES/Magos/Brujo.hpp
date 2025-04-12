#pragma once
#include "Magos.hpp"

class Brujo : public Magos
{
private:
    int brujeria; //actua para reducir daño
public:
    Brujo(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void Escudomagico() override; 

    ~Brujo()= default;
};

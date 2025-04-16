#pragma once
#include "Magos.hpp"

class Brujo : public Magos
{
private:
    int brujeria; //actua para reducir daño
public:
    Brujo(string nombre,  pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS);

    void Escudomagico() override; 
    void brujeriaMagica();

    ~Brujo()= default;
};

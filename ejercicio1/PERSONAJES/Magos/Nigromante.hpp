#pragma once
#include "Magos.hpp"

class Nigromante : public Magos
{
private:
    int nigromacia; //actua para reducir daño, controla fuerzas oscuras
public:
    Nigromante(string nombre,  pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);

    void Escudomagico() override; 

    ~Nigromante()= default;
};

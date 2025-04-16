#pragma once
#include "Magos.hpp"

class Nigromante : public Magos
{
private:
    int nigromacia; //actua para reducir daño, controla fuerzas oscuras
public:
    Nigromante(string nombre,  pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS);

    void Escudomagico() override;
    void control_daño();

    ~Nigromante()= default;
};

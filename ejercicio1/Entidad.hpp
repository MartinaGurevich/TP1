#pragma once
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class EntidadOrganizativa
{
private:
    string Nombre;
    vector<shared_ptr<EntidadOrganizativa>> subentidades;

public:
    EntidadOrganizativa(string nombre);

    virtual string getNombre();

    virtual void agregar_subentidades(shared_ptr<EntidadOrganizativa> subentidad) = 0;
    virtual int contar_subentidades()= 0;

    virtual ~EntidadOrganizativa();
};







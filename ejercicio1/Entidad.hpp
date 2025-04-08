#pragma once
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class EntidadOrganizativa
{
protected: //para q los atributos privados puedan usarse en las derivadas 
    string Nombre;
    vector<shared_ptr<EntidadOrganizativa>> subentidades;

public:
    EntidadOrganizativa(string nombre);

    virtual string getNombre()=0; //LO SACO MARIANO

    virtual void agregar_subentidades(shared_ptr<EntidadOrganizativa> subentidad) = 0;
    virtual int contar_subentidades()= 0;

    virtual ~EntidadOrganizativa()= default;
};







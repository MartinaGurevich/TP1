#pragma once
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class EntidadOrganizativa
{
protected: //para q los atributos privados puedan usarse en las derivadas 
   
    vector<unique_ptr<EntidadOrganizativa>> subentidades;//saco punterps

public:

    EntidadOrganizativa(string nombre);
    
    string Nombre;

    virtual string getNombre()=0; //LO SACO MARIANO

    virtual void agregar_subentidades(unique_ptr<EntidadOrganizativa> subentidad) = 0; //BORRAR LOS PUROS Y DEFINIRLOS EN EL CONSTRUCTOR 
    virtual int contar_subentidades()= 0; //IDEM 

    virtual ~EntidadOrganizativa()= default;
};


//TODO UNIQUE USO







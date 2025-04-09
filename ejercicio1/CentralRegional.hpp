#pragma once
#include "Entidad.hpp"
#include "Empresa.hpp"
#include "GerenteMedio.hpp"
#include "GerenteAlto.hpp"
#include <memory>
#include <vector>
#include <string>
#include <set>//para controlar unicidad de paises 

using namespace std;

class CentralRegional: public EntidadOrganizativa
{
private:

    int cantEmpleados;
    vector<unique_ptr<GerenteAlto>> gerentesAlto; //estos dos, implemento su rango en el constructor 
    vector<unique_ptr<GerenteMedio>> gerentesMedio;
    vector<unique_ptr<Empresa>> empresas; //empresasde la central regional. Compuesta por la clase empresa 
public:

    CentralRegional(const string& nombre, int cantEmpleados );
    
    set<string> paises; //en el constructos hago lo de {unique, ordered}. como son strings no hace falta manejo de meemo
    string agregar_pais(const string& pais);
//sacarlo paiis
    int getCantEmpleados();
    string agregar_GerenteAlto(); //hatsq q sean 5
    string agregar_GerenteMedio();// hasta q sean 20
    //string agregar_Empresa(); //LO DEJO CON ESTO O USO AGREGARSUBENTIDADES.


    vector<string> getEmpNames() const; 
    vector<GerenteAlto*> getGerenteAlto(); //de 1 a 5
    vector<GerenteMedio*> getGerentemedio();// de 1 a 20
    
    //metodos virtuales de entidad
    void agregar_subentidades(unique_ptr<EntidadOrganizativa> subentidad) override; //aca se gregan las empresas 
    int contar_subentidades() override;
    string getNombre() override; // VER Q HAGO CON ESTE 

    ~CentralRegional()= default;
};



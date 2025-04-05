
#pragma once
#include "Entidad.hpp"
//#include "Departamento.hpp" //uso lso departamentos dentro de la empresa
#include <memory>
#include <vector>
#include <string>

using namespace std;


//clase derivada de la abstracta 
class Departamento_; //froward declaration

class Empresa: public EntidadOrganizativa
{
private:
    string nombre; //usar?
    string direccion;
    vector<shared_ptr<Departamento_>> departamentos; //empresa es duena de departamento, si se elimina la empress los departamentos tambuien se eliminann

public:
    Empresa(string nombre, string direccion); //fijarse si lo pongo const string&

    string getNombre() override;
    string getDireccion();

    //metodos de la empresa
    shared_ptr<Departamento_> getDepByName(string& nombre);
    vector<shared_ptr<Departamento_>> getDepNames();

    //metodos de la abtracta
    void agregar_subentidades(shared_ptr<EntidadOrganizativa> subentidad) override;
    int contar_subentidades() override;


    ~Empresa();
};


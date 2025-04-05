
#pragma once
#include "Entidad.hpp"
//#include "Departamento.hpp" //uso lso departamentos dentro de la empresa
#include <memory>
#include <vector>
#include <string>

using namespace std;


//clase derivada de la abstracta 
class Departamento; //froward declaration

class Empresa: public EntidadOrganizativa
{
private:
    string nombre; //usar?
    string direccion;
    vector<shared_ptr<Departamento>> departamentos; //empresa es duena de departamento, si se elimina la empress los departamentos tambuien se eliminann

public:
    Empresa(string& nombre, string& direccion);

    string getNombre();
    string getDireccion();

    //metodos de la empresa
    shared_ptr<Departamento> getDepByName(string& nombre);
    vector<shared_ptr<Departamento>> getDepNames();

    ~Empresa();
};


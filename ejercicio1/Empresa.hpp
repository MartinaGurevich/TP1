
#pragma once
#include "Entidad.hpp"
#include "Departamento_.hpp" //uso lso departamentos dentro de la empresa
#include <memory>
#include <vector>
#include <string>


using namespace std;


//clase derivada de la abstracta 
//class Departamento_; //froward declaration

class Empresa: public EntidadOrganizativa
{
private:
    //string nombre; //usar?
    string direccion; //se pone en la parte de public?
    vector<shared_ptr<Departamento_>> departamentos; //empresa es duena de departamento, si se elimina la empress los departamentos tambuien se eliminann, TIENE QUE IR EN PRIVATE?

public:
    Empresa(const string& Nombre, const string& direccion); //fijarse si lo pongo const string&

    string getNombre() override;
    string getDireccion();  //VER ESTO
   
    //metodos de la empresa
    shared_ptr<Departamento_> getDepByName(const string& Nombre);
    vector<string> getDepNames();

    //metodos de la abtracta
    void agregar_subentidades(shared_ptr<EntidadOrganizativa> subentidad) override;
    int contar_subentidades() override;


    ~Empresa()= default;
};


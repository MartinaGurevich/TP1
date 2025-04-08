
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
private: //CAMBIO LAS COMPOSICIONES A UNIQUE Y PARA COPIARLO HAGOP MOVE 
    vector<shared_ptr<Departamento_>> departamentos; //empresa es duena de departamento, si se elimina la empress los departamentos tambuien se eliminann, TIENE QUE IR EN PRIVATE?
public:
    Empresa(const string& Nombre, const string& direccion); //fijarse si lo pongo const string&
    
    string direccion;
    string getNombre() override;
    string getDireccion();  //VER ESTO
   
    //metodos de la empresa
    shared_ptr<Departamento_> getDepByName(const string& Nombre);
    vector<string> getDepNames();

    //agrego departamento 
    string agregar_departamento(shared_ptr<Departamento_> depa);

    //metodos de la abtracta LOS TENGO QUE DESHABILITAR
    void agregar_subentidades(shared_ptr<EntidadOrganizativa> subentidad) override; // = delete;
    int contar_subentidades() override;//  = delete;


    ~Empresa()= default;
};


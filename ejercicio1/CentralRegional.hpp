#pragma once
#include "Entidad.hpp"
#include <memory>
#include <vector>
#include <string>

using namespace std;
class GerenteAlto;
class Gerentemedio;
class Empresa;


class CentralRegional: public EntidadOrganizativa
{
private:

    int cantEmpleados;
    vector<shared_ptr<GerenteAlto>> gerentesAlto; //estos dos, implemento su rango en el constructor 
    vector<shared_ptr<Gerentemedio>> gerentesMedio;
    vector<unique_ptr<Empresa>> empresas; //empresasde la central regional. Compuesta por la clase empresa 
public:

    CentralRegional(string nombre, int cantempleados );
    
    vector<string> paises; //en el constructos hago lo de {unique, ordered}. como son strings no hace falta manejo de meemo
    
    int getCantEmpleados();
    vector<unique_ptr<Empresa>>& getEmpNames() const; //es unique, lo tengo que tomar por referencia, no por valor
    vector<shared_ptr<GerenteAlto>> getGerenteAlto(); //de 1 a 5
    vector<shared_ptr<Gerentemedio>> getGerentemedio();// de 1 a 20
    
    //metodos virtuales de entidad

    //string getNombre() override;
    void agregar_subentidades(shared_ptr<EntidadOrganizativa> subentidad) override;
    int contar_subentidades() override;

    ~CentralRegional();
};



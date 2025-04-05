#pragma once 
#include <memory>
#include <vector>
#include "Entidad.hpp"

class Empleado; //dsp cambio a empleado.h
//incluse la clase empleasdo
class Departamento: public EntidadOrganizativa //estabien ? PREGGGGGG
{
private:
    string nombre;
    string ubicacion ;
    vector<shared_ptr<Empleado>> empleados;

    
public:
    Departamento(string& nombre, string& ubicacion);

    //string getNombre();
    string getUbicacion();

    static int  contarEmpleados(); //VER ESTOOO
    vector<shared_ptr<Empleado>> getEmployees();
    bool contratarEmpleado(shared_ptr<Empleado> emple);
    bool despedirEmpleado(shared_ptr<Empleado> emple);


    //metodos de la abstracta
    string getNombre()override;
    void agregar_subentidades(shared_ptr<EntidadOrganizativa> subentidad) override;
    int contar_subentidades()override;

    ~Departamento();
};



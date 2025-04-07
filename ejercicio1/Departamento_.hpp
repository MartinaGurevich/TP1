#pragma once 
#include <memory>
#include <vector>
#include "Empresa.hpp"



class Empleado;  //incluyo empleado 

//incluse la clase empleasdo
class Departamento_//estabien ? PREGGGGGG
{
private:
    string nombre;
    string ubicacion ;
    vector<shared_ptr<Empleado>> empleados;

    
public:
    Departamento_(string& nombre, string& ubicacion);

    string getNombre();
    string getUbicacion();

    static int  contarEmpleados(); //VER ESTOOO
    vector<shared_ptr<Empleado>> getEmployees();
    bool contratarEmpleado(shared_ptr<Empleado> emple);
    bool despedirEmpleado(shared_ptr<Empleado> emple);

    ~Departamento_();
};



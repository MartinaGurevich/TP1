#pragma once 
#include <memory>
#include <string>
#include <vector>
#include "Empleado_.hpp"

using namespace std;


//incluse la clase empleasdo
class Departamento_//estabien ? PREGGGGGG
{
private:

    vector<unique_ptr<Empleado_>> empleados;
    static int cantEmpleadosDepts;
    
public:
    Departamento_(const string& nombre,const string& ubicacion);

    string nombre;
    string ubicacion ;
    
    string getNombre();
    string getUbicacion();

    static int  contarEmpleados(); 
    vector<Empleado_*> getEmployees();
    bool contratarEmpleado(unique_ptr<Empleado_> emple);
    bool despedirEmpleado(Empleado_* emple); //porq quiero solo el nombre por referencia 

    ~Departamento_()= default;
};



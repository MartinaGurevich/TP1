#pragma once 
#include <memory>
#include <string>
#include <vector>
#include "Empleado_.hpp"

using namespace std;



//class Empleado;  //incluyo empleado 

//incluse la clase empleasdo
class Departamento_//estabien ? PREGGGGGG
{
private:
    string nombre;
    string ubicacion ;
    vector<shared_ptr<Empleado_>> empleados;
    static int cantEmpleadosDepts;
    
public:
    Departamento_(const string& nombre,const string& ubicacion);

    string getNombre();
    string getUbicacion();

    static int  contarEmpleados(); //VER ESTOOO
    vector<shared_ptr<Empleado_>> getEmployees();
    bool contratarEmpleado(shared_ptr<Empleado_> emple);
    bool despedirEmpleado(shared_ptr<Empleado_> emple);

    ~Departamento_();
};



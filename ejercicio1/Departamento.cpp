#include "Departamento_.hpp"

//constructor de departamento 

int Departamento_ :: cantEmpleadosDepts=0; //porque es static
Departamento_:: Departamento_(const string& nombredepa,const string& ubi ) : nombre(nombredepa), ubicacion(ubi){
    cantEmpleadosDepts++; //cada vez q se crea un depa aumento contador
}

//GETTERS
string Departamento_::getNombre() {
    return nombre;
}

string Departamento_::getUbicacion(){
    return ubicacion;
}


int Departamento_:: contarEmpleados(){
    return cantEmpleadosDepts; //o empleados.size() si quiro contar por instancia , no entre todos los depst
}

vector<shared_ptr<Empleado_>> Departamento_:: getEmployees(){
    return empleados;
}

bool Departamento_:: contratarEmpleado(shared_ptr<Empleado_> emple){
    empleados.push_back(emple);
    return true; // saca el warning 
}

bool Departamento_:: despedirEmpleado(shared_ptr<Empleado_> emple){
    for (auto e = empleados.begin(); e != empleados.end(); ++e){
        if ( *e == emple){
            empleados.erase(e);
            return true; //lo encontre 
        }
    }
    return false;
}





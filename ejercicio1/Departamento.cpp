#include "Departamento_.hpp"

//constructor de departamento 

Departamento_:: Departamento_(const string& nombredepa,const string& ubi ) : nombre(nombredepa), ubicacion(ubi){}

//GETTERS
string Departamento_::getNombre() {
    return nombre;
}

string Departamento_::getUbicacion(){
    return ubicacion;
}

// int Departamento_:: contarEmpleados(){
//     for (auto& emple: empleados){
//         if()
//     }
// }

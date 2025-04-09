#include "CentralRegional.hpp"

CentralRegional:: CentralRegional(const string& nombre, int cantEmpleados ): EntidadOrganizativa (nombre), cantEmpleados(cantEmpleados){}

string CentralRegional:: agregar_pais(const  string& pais){
    paises.push_back(move(pais));
}

int CentralRegional:: getCantEmpleados(){
   
    int cant_altos= gerentesAlto.size();
    int cant_medios= gerentesMedio.size();
    return cant_altos + cant_medios;
}

string CentralRegional:: agregar_GerenteAlto(){
    
}
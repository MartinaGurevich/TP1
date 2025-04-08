#include "Empresa.hpp"

//constructor de empresa
Empresa ::Empresa(const string& Nombre, const string& direccion): EntidadOrganizativa(Nombre), direccion(direccion) {}

string Empresa :: getNombre(){
    return EntidadOrganizativa:: getNombre();
}

string Empresa :: getDireccion(){
    return direccion;
}

Departamento_* Empresa:: getDepByName(const string& Nombre){
    for(auto& departamento: departamentos){
        if(departamento-> getNombre()== Nombre){
            return departamento.get();
        }
    }
    return nullptr;
}

vector<string> Empresa:: getDepNames(){
    //tengo q devolver un lista de nombres de los dep
    vector<string> nombres;
    for (auto& departamento: departamentos){
        nombres.push_back(departamento-> getNombre());
    }
    return nombres; //devuoevo nombres en lista de los dep
}

//agrego departamento 
string Empresa:: agregar_departamento(unique_ptr< Departamento_> depa ){
    //valido q no se hagan duplicados
    for (auto& depa_existe: departamentos){
        if(depa_existe->getNombre()== depa-> getNombre()){
            return "El departamento ya existe"; //ya existe la subent
        }
    }
    departamentos.push_back(move(depa));  //lo agrego al vector de departamentos 
    return  "Departamento agregado con exito.";
}

//metodos de la clase abstracta

void Empresa:: agregar_subentidades(unique_ptr<EntidadOrganizativa> subent){ 
    //en empresa no se usan subetidades
    return;
}


int Empresa:: contar_subentidades(){
    return 0; 
}

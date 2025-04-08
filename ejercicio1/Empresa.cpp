#include "Empresa.hpp"

//constructor de empresa
Empresa ::Empresa(const string& Nombre, const string& direccion): EntidadOrganizativa(Nombre), direccion(direccion) {}

string Empresa :: getNombre(){
    return EntidadOrganizativa:: getNombre();
}

string Empresa :: getDireccion(){
    return direccion;
}

shared_ptr<Departamento_> Empresa:: getDepByName(const string& Nombre){
    for(auto& departamento: departamentos){
        if(departamento-> getNombre()== Nombre){
            return departamento;
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
string Empresa:: agregar_departamento(shared_ptr< Departamento_> depa ){
    //valido q no se hagan duplicados
    for (auto& depa_existe: departamentos){
        if(depa_existe->getNombre()== depa-> getNombre()){
            return; //ya existe la subent
        }
    }
    departamentos.push_back(depa);  //lo agrego al vector de departamentos 
}

//metodos de la clase abstracta

void Empresa:: agregar_subentidades(shared_ptr<EntidadOrganizativa> subent){ 
    // //valido q no se hagan duplicados
    // for (auto& subent_existe: subentidades){
    //     if(subent_existe->getNombre()== subent-> getNombre()){
    //         return; //ya existe la subent
    //     }
    // }
    // subentidades.push_back(subent); //la agrego xq no existe 
    return;
}


int Empresa:: contar_subentidades(){
    //return subentidades.size();
    return 0; 

}

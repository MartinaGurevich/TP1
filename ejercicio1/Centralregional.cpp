#include "CentralRegional.hpp"
#include <algorithm> //para el find

//constructor , luego puedo agregar paises con agregar_pais()
CentralRegional:: CentralRegional(const string& nombre, int cantEmpleados ): EntidadOrganizativa (nombre), cantEmpleados(cantEmpleados){}

//agrego pais con unicidad y orden 
string CentralRegional:: agregar_pais(const  string& pais){
    auto result=paises.insert(pais); //par<itera, bool>
    if (!result.second){
        return "Este pais ya existe";
    }
    return "Pais agregado con exito.";
}

int CentralRegional:: getCantEmpleados(){
    return cantEmpleados;
}

//agregar gerente alto
string CentralRegional:: agregar_GerenteAlto(){
    if(gerentesAlto.size()>= 5){
        return "No es posible agregar un gerente Alto mas. Ya son 5 o más.";
    }
    gerentesAlto.push_back(make_unique<GerenteAlto> ());
    return "Gerente ALTO agregado. ";
}


//agregar gerente medio 
string CentralRegional:: agregar_GerenteMedio(){
    if(gerentesMedio.size()>= 20){
        return "No es posible agregar un gerente Alto mas. Ya son 20 o más.";
    }
    gerentesMedio.push_back(make_unique<GerenteMedio> ());
    return "Gerente MEDIO agregado. ";
}


//agregar empresa a central regional PREGUNTAR
// string CentralRegional:: agregar_Empresa(){
//     empresas.push_back(make_unique<Empresa> ("empresaDefault","direccDefault"));
//     return "empresa agregada";
// }

//obtengo nombre de empresas 
vector<string> CentralRegional:: getEmpNames() const{
    vector<string> nombres_empresas;
    for(const auto& emp: empresas){
        nombres_empresas.push_back(emp->getNombre());

    }
    return nombres_empresas;
}

//get gerente alto ,obtengo punteros 
vector<GerenteAlto*> CentralRegional:: getGerenteAlto(){
    vector<GerenteAlto*> resultado;
    for(const auto& gerenteA: gerentesAlto){
        resultado.push_back(gerenteA.get());
    }
    return resultado;
}

//get gerente medio ,obtengo punteros 
vector<GerenteMedio*> CentralRegional:: getGerentemedio(){
    vector<GerenteMedio*> resultado;
    for(const auto& gerenteM: gerentesMedio){
        resultado.push_back(gerenteM.get());
    }
    return resultado;
}

//metodos de la abstracta 

//agregosubentidad, me fijo si es empresa y la agrego al vector empresa
//AGREGO EMPRESA ACA PERO PRGUNTARLE A JUANI SI HAGO UN METODO AGREGAR_EMPRESA
void CentralRegional:: agregar_subentidades( unique_ptr<EntidadOrganizativa> subentidad){
    if(Empresa* emp= dynamic_cast<Empresa*> (subentidad.get())){ //se por dymanic_cast que apunta a empresa
        empresas.push_back(unique_ptr<Empresa>(static_cast<Empresa*>(subentidad.release()))); //release me da empresa* sin destruirlo, static lo convierte en el tipo correcto y se agrega al vector empresas
    }
}

//contar subentidades
int CentralRegional:: contar_subentidades(){
    return empresas.size();
}

string CentralRegional:: getNombre(){
    return EntidadOrganizativa:: getNombre();
}


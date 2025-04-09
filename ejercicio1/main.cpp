#include "Empresa.hpp"
#include "Departamento_.hpp"
#include "Empleado_.hpp"
#include "CentralRegional.hpp"
#include <memory>
#include <iostream>
using namespace std;

int main(){
    //creo empresa
    Empresa MiEmpresa("Antonio SRL", "Gral Rod 123");
    cout<<"Nombre de la empresa:"<<MiEmpresa.getNombre()<< endl;
    cout<<"direcc de la empresa:"<<MiEmpresa.getDireccion()<< endl;

    
    //creo departamento con unique y lo agrego
    auto dep1= make_unique <Departamento_> ("Recursos Humanos", "Piso 1");
    //lo agregoa  al empresa
    string nuevodep= MiEmpresa.agregar_departamento(move(dep1));

    cout<<"El departamento "<<nuevodep<<" fue agregado a la empresa"<<endl;
    return 0;

}



//poner los atributos que estan con + en public
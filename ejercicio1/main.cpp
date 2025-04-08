#include "Empresa.hpp"
#include <iostream>
using namespace std;

int main(){
    //creo empresa
    shared_ptr<Empresa> MiEmpresa= make_shared<Empresa>("Antonio SRL", "Gral Rod 123");

    //nombre y direcc

    cout<<"Nombre de la empresa:"<< MiEmpresa-> getNombre()<< endl;
    cout<<"Direccion de la empresa:"<< MiEmpresa-> getDireccion()<< endl;
 
    //contar subent
    cout<<"Cant de subentidades:"<< MiEmpresa-> contar_subentidades()<< endl;

    //agregar subent
    MiEmpresa-> agregar_subentidades(MiEmpresa);
    cout<<"Subentidades luego de agregar una:"<< MiEmpresa-> contar_subentidades()<< endl;

    return 0;

}
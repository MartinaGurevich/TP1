#include "Empresa.hpp"
#include <iostream>
using namespace std;

int main(){
    //creo empresa
    unique_ptr<Empresa> MiEmpresa= make_unique<Empresa>("Antonio SRL", "Gral Rod 123");

    //nombre y direcc

    cout<<"Nombre de la empresa:"<< MiEmpresa-> getNombre()<< endl;
    cout<<"Direccion de la empresa:"<< MiEmpresa-> getDireccion()<< endl;
 
    //contar subentDEMUESTRO QUE NO SE PUEDE.
    cout<<"Cant de subentidades:"<< MiEmpresa-> contar_subentidades()<< endl;
    cout<<"--> La Empresa no incluye subentidades. " <<endl;



    //agregar subent DEMUESTRO QUE NO SE PUEDE.
    MiEmpresa-> agregar_subentidades(MiEmpresa);
    cout<<"Subentidades luego de agregar una:"<< MiEmpresa-> contar_subentidades()<< endl;
    cout<<"--> La Empresa no incluye subentidades. No es un metodo posible de utilizar en mi Clase Empresa " <<endl;


     //seguir porbando con depa
    return 0;

}



//poner los atributos que estan con + en public
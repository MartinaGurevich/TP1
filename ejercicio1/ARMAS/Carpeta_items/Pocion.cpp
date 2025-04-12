#include "Pocion.hpp"
#include <iostream>

using namespace std;

Pocion :: Pocion(string nombre, int daño,string compatibilidad, int modelo): 
    ItemsMagicos(nombre, "Pocion", daño, 1 , modelo),
    veneno("veneno"),
    dosisRestantes(10),
    poder(daño),
    compatibilidad(compatibilidad),
    vencida(false){}
    

bool Pocion:: personaje_compatible(string compatibilidad){
    if(compatibilidad=="Mago"){
        cout<<"Item compatible para un Mago"<<endl;
        return true;
    }else{
        cout<<"Item NO compatible, daño reducido."<<endl;
        //disminuye el daño en 5 puntos si es un Guerrero.
        int dañoActual= getDaño();
        setDaño(dañoActual - 5);

        cout<<"La pocion daña: "<<getDaño()<< " porque usted es Gurerrero."<<endl;
        return false;
    }
}

void Pocion:: aplicarEfectoMagico(){
    if(dosisRestantes<= 0){
        cout<<"Pocion vacia. "<<endl;
        return;
    }
    int daño= poder;

    if(vencida){
        daño -= 10;
        if (daño<0) daño =0;
        cout<<"Pocion vencida... Daño debil"<<endl;
    }

    cout<<"La pocion envenena al enemigo causandole "<<daño<< " de daño"<<endl;
    dosisRestantes--;
    if(dosisRestantes> 0){
        cout<<dosisRestantes<<" dosis restantes"<<endl;
    }else{
        dosisRestantes=0;
        cout<<"la pocion se agoto."<<endl;
        recargardosis();
    }
}

int Pocion:: usarPocion(){
    aplicarEfectoMagico();
    return poder;
}

void Pocion:: recargardosis(){
    dosisRestantes= 10;
    vencida= false;
    cout<<"Pocion recargada"<< endl;
}

void Pocion:: verificarvencimiento(){
    int Año= 2025;
    if(getModelo()+10 < Año){
        vencida=true;
    }
}

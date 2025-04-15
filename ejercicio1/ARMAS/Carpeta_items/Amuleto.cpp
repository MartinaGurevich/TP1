#include "Amuleto.hpp"
#include <iostream>

using namespace std;

Amuleto :: Amuleto(string nombre, string compatibilidad, int modelo): 
    ItemsMagicos(nombre, "Amuleto", 20, 3 , modelo),
    elemento("tierra"),
    activado(true),
    cargas(5),
    Poderdaño(20),
    compatibilidad(compatibilidad){}
    

bool Amuleto:: personaje_compatible (string compatibilidad){
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


void Amuleto:: aplicarEfectoMagico(){
    int daño= Poderdaño;

    if(!activado){
        daño /=2;
        cout<<"Amuleto desactivado. Daña la mitad de su poder."<<endl;
    }else{
        cout<< "Amuleto activado, libera su poder: "<<elemento<<endl;
        cout<< "Daño total activado:" <<daño<<endl;
    }

    //si tiene cargas
    if (cargas > 0){
        cargas --;
        cout <<"cargas restantes: "<< cargas<< endl;
        if (cargas==0){
            cout<<"El amuleto se desactiva porque no tiene cargas"<<endl;
            activado= false;
        }
    }else{
        cargas=0;
        cout<<"sin cargas disponibles. Hay que recargar"<<endl;
    }

}

void Amuleto:: activar(){
    if(cargas>0){
        activado = true;
        cout<< "amuleto activado."<<endl;
    }else{
        cout<<"no hay cargas para poder activarlo"<<endl;
    }
}

void Amuleto:: desactivar(){
    activado= false;
}


void Amuleto:: recargar(){
    cargas= 5;
    activado= true;
    cout<<"cargas del amuelto restauradas. Activado."<< endl;
}

int Amuleto:: poderDaño(){
    if(!activado){
        cout<<"Amuleto desactivado. Su daño es: "<< Poderdaño/2<<endl;
        return Poderdaño;
    }else{
        cout<<"Daño total. Amuleto activado: " <<Poderdaño<<endl;
        return Poderdaño;
    }
}


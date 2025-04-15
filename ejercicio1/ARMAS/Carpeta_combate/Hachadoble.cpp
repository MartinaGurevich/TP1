#include "Hachadoble.hpp"

Hachadoble:: Hachadoble(string nombre, string compatibilidad,int modelo, int peso):
Armascombate(nombre, "Hachadoble",20,modelo, peso,compatibilidad), //20 de daño base
extraFilo(15),
filo_simple(50){}

void Hachadoble:: golpeEspecial(){ // se usa el extra filo
    desafilar(); //se desgaste porque la uso
    int daño= getDaño();
    setDaño(daño + extraFilo);
    cout<<"el daño generado es: "<<getDaño()<<endl;

}

int Hachadoble:: desafilar(){
    if (filo_simple > 0){
        filo_simple -=2;
        return filo_simple ; 
    }else{
        filo_simple=0;
        cout<<"Hacha doble sin filo. Necesita afilar para dañar"<<endl;
        return filo_simple;
    }

}

int Hachadoble::afilar(){
    if(filo_simple == 0){
        filo_simple= 25;
    }
    return filo_simple;
}




#include "Espada.hpp"

Espada:: Espada(string nombre, string compatibilidad,int modelo, int peso):
Armascombate(nombre, "Espada",15 ,modelo, peso,compatibilidad), //hace 15 de daño
Aumenta_longitud(20),
filo(20){} //aumenta la longitd 20 cm

void Espada:: golpeEspecial(){ // se usa el aumneto de longtyd 
    int daño= getDaño();
    setDaño(daño + Aumenta_longitud);
    cout<<"el daño generado es: "<<getDaño()<<endl;

}

int Espada::afilar(){
    if(filo == 0){
        filo= 20;
    }
    return filo;
}

int Espada:: golpe(){
    filo--;
    int daño= getDaño();
    cout<<"El golpe normal de la espada es: "<<daño<< " de daño"<<endl;
    return daño;
}

int Espada:: getFilo(){
    return filo;
}



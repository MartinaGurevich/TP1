#include "Hachadoble.hpp"

Hachadoble:: Hachadoble(int extrafilo, int filosimple):
Armascombate(nombre, "Hachadoble",daño,modelo, peso,compatibilidad),
extraFilo(60),
filo_simple(25){}

void Hachadoble:: golpeEspecial(){ // se usa el extra filo
    desafilar(); //se desgaste porque la uso
    int daño= getDaño();
    daño= extraFilo;
}

int Hachadoble:: desafilar(){
    if (filo_simple < 0){
        cout<<"Hacha doble sin filo"<<endl;
    }
    
}





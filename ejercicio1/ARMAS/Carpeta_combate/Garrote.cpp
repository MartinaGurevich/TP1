#include "Garrote.hpp"

Garrote:: Garrote(string nombre, string compatibilidad,int modelo, int peso, int dureza):
Armascombate(nombre, "Garrote", 25 ,modelo, peso,compatibilidad), //hace 25 de daño
Dureza(dureza){} // daño de garrote con mas peso

void Garrote:: golpeEspecial(){ //daño mayor por que llega mas profundo para lastimar
    int daño= getDaño();
    if(Dureza>= 20){
        setDaño(daño + Dureza);
        cout<<"El garrote golpea con mayor Fuerza. Su daño es: "<<getDaño()<<endl;
    }
    else{
        daño_basico(); //si es menor q 20 etnonces daño basico
    }
}

int Garrote:: daño_basico(){
    int daño_normal= getDaño();
    cout<<"El daño basico generado por la lanza es: "<<daño_normal<<endl;
    return daño_normal;
}



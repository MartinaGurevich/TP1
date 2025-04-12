#include "Lanza.hpp"

Lanza:: Lanza(string nombre, string compatibilidad,int modelo, int peso):
Armascombate(nombre, "Lanza",15 ,modelo, peso,compatibilidad), //hace 15 de daño
profundidad_lanza(20){} // daño de lanza mas dura

void Lanza:: golpeEspecial(){ //daño mayor por que llega mas profundo para lastimar
    int daño= getDaño();
    setDaño(daño + profundidad_lanza);
    cout<<"La lanza golpea con mayor profundidad es: "<<getDaño()<<endl;

}

int Lanza:: daño_basico(){
    int daño_normal= getDaño();
    cout<<"El daño basico generado por la lanza es: "<<daño_normal<<endl;
    return daño_normal;
}



#include "Caballero.hpp"

Caballero:: Caballero(string nombre, pair<unique_ptr<Armas>,unique_ptr<Armas>> ARMAS): 
Guerreros (nombre,10, std:: move(ARMAS)), //nombre, nuvel y arma
altaDefensa(10){}

void Caballero:: ArmaduraEspecial(){
    usar_AltaDefensa();
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Caballero y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}


void Caballero :: usar_AltaDefensa(){
    daño_obtenido= max(0,daño_obtenido - altaDefensa);
    vida -= daño_obtenido;
}



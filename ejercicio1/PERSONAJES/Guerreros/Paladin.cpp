#include "Paladin.hpp"

Paladin:: Paladin(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): 
Guerreros (nombre,15, ARMAS), //nombre, nuvel y arma
Luz_purificadora(15){}

void Paladin:: ArmaduraEspecial(){
    usar_luz();
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Paladin y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}

void Paladin:: usar_luz(){
    daño_obtenido= max(0,daño_obtenido - Luz_purificadora);
    vida -= daño_obtenido; 
}


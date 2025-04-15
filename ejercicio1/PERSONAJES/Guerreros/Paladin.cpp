#include "Paladin.hpp"

Paladin:: Paladin(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): 
Guerreros (nombre,15, ARMAS), //nombre, nuvel y arma
Luz_purificadora(15){}

void Paladin:: ArmaduraEspecial(){
    daño_obtenido= max(0,daño_obtenido - Luz_purificadora);
    //setDaño_obtenido(daño_obtenido - escudo);
    vida -= daño_obtenido;
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Paladin y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;


}




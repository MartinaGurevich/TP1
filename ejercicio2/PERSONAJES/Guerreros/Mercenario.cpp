#include "Mercenario.hpp"

Mercenario:: Mercenario(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): 
Guerreros (nombre,10, ARMAS), //nombre, nuvel y arma
Defensa_oportunista(15){}

void Mercenario:: ArmaduraEspecial(){
    daño_obtenido= max(0,daño_obtenido - Defensa_oportunista);
    //setDaño_obtenido(daño_obtenido - escudo);
    vida -= daño_obtenido;
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Conjurador y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;


}




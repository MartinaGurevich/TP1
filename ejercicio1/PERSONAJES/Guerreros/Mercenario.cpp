#include "Mercenario.hpp"

Mercenario:: Mercenario(string nombre, pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS): 
Guerreros (nombre,10, std:: move(ARMAS)), //nombre, nuvel y arma
Defensa_oportunista(15){}

void Mercenario:: ArmaduraEspecial(){
    usar_defensa();
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Mercenario y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}

void Mercenario:: usar_defensa(){
    daño_obtenido= max(0,daño_obtenido - Defensa_oportunista);
    vida -= daño_obtenido;
}


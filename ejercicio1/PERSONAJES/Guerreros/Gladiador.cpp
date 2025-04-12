#include "Gladiador.hpp"

Gladiador:: Gladiador(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): 
Guerreros (nombre,56, ARMAS), //nombre, nuvel y arma
Resistencia(20){}

void Gladiador:: ArmaduraEspecial(){
    daño_obtenido= max(0,daño_obtenido - Resistencia );
    vida -= daño_obtenido;
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Conjurador y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}




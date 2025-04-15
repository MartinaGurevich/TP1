#include "Barbaro.hpp"

Barbaro:: Barbaro(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): 
Guerreros (nombre,20, ARMAS), //nombre, nuvel y arma
furia(20){}

void Barbaro:: ArmaduraEspecial(){
    usar_furia();
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Barbaro y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}

void Barbaro:: usar_furia(){
    daño_obtenido= max(0,daño_obtenido - furia);
    vida -= daño_obtenido;
}




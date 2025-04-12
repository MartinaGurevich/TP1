#include "Brujo.hpp"

Brujo:: Brujo(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): 
Magos (nombre,10, ARMAS), //nombre, nuvel y arma
brujeria(10){}

void Brujo:: Escudomagico(){
    daño_obtenido= max(0,daño_obtenido - brujeria);
    //setDaño_obtenido(daño_obtenido - escudo);
    vida -= daño_obtenido;
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Conjurador y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;


}




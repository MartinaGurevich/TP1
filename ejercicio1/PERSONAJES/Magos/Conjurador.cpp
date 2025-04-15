#include "Conjurador.hpp"

Conjurador:: Conjurador(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): 
Magos (nombre,25, ARMAS),
conjuro(30){}

void Conjurador:: Escudomagico(){
    conjurando();
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Conjurador y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}

void Conjurador:: conjurando(){
    daño_obtenido= max(0,daño_obtenido - conjuro);
    vida -= daño_obtenido; 
}



#include "Hechicero.hpp"

Hechicero:: Hechicero(string nombre, pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS): //ver lo de nvel 
Magos (nombre,40, std:: move(ARMAS)),
escudo_hechizo(20){}

void Hechicero:: Escudomagico(){
    hechizoAudaz();
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Hechicero y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}


void Hechicero:: hechizoAudaz(){
    daño_obtenido= max(0,daño_obtenido - escudo_hechizo);
    vida -= daño_obtenido;
}

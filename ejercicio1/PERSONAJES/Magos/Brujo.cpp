#include "Brujo.hpp"

Brujo:: Brujo(string nombre, pair<unique_ptr<Armas>, unique_ptr<Armas>> ARMAS): 
Magos (nombre,10, std:: move(ARMAS)), //nombre, nuvel y arma
brujeria(10){}

void Brujo:: Escudomagico(){
    brujeriaMagica();
    cout <<" PERO...."<<getNombre() <<" activa su escudo de Brujo (con brujeria) y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;
}

void Brujo:: brujeriaMagica(){
    daño_obtenido= max(0,daño_obtenido - brujeria);
    vida -= daño_obtenido; 
}


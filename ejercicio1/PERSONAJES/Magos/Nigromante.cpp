#include "Nigromante.hpp"

Nigromante:: Nigromante(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): //ver lo de nvel 
Magos (nombre,50, ARMAS),
nigromacia(30){}

void Nigromante:: Escudomagico(){
    control_daño();
    cout <<"PERO...."<<getNombre() <<" activa su escudo de Nigromante y el daño ejercido se reduce a  : "<< daño_obtenido<< endl;

}

void Nigromante:: control_daño(){
    daño_obtenido= max(0,daño_obtenido - nigromacia);
    vida -= daño_obtenido;
}


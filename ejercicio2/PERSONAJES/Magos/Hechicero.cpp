#include "Hechicero.hpp"

Hechicero:: Hechicero(string nombre,int /*nivel*/, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): //ver lo de nvel 
Magos (nombre,40, ARMAS),
escudo(20){}

void Hechicero:: Escudomagico(){
    setDaño_obtenido(daño_obtenido - escudo);
    vida -= daño_obtenido;
}



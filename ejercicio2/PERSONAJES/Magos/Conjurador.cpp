#include "Conjurador.hpp"

Conjurador:: Conjurador(string nombre, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS): //ver lo de nvel 
Magos (nombre,25, ARMAS),
escudo(30){}

void Conjurador:: Escudomagico(){
    setDaño_obtenido(daño_obtenido - escudo);
    vida -= daño_obtenido;
}

int Conjurador:: lanzoconjuro(Personajes& objetivo){ //aumento mi vida 10 y le saco vida a el otro 10
    if(daño_obtenido>50){
        cout<<"Lanzo conjuro porque el daño fue mayor a 50. Saca 10 de vida a " <<objetivo.getNombre()<<endl;
        
    }
}



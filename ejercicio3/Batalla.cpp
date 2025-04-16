#include "Batalla.hpp"

unique_ptr<Personajes> rival_Aleatorio(){

    vector<Tipopersonaje> personajes_disponibles= {
        Tipopersonaje::brujo,
        Tipopersonaje::conjurador,
        Tipopersonaje::hechicero,
        Tipopersonaje::nigromante,
        Tipopersonaje::barbaro,
        Tipopersonaje::paladin,
        Tipopersonaje::mercenario,
        Tipopersonaje::gladiador
    };

    //elijo entre 3 y 4 magos sin repetir 
    int personaje_eljido= rand() % personajes_disponibles.size(); //elije 1 personaje
    Tipopersonaje tipo= personajes_disponibles[personaje_eljido];

    int cant_armas= rand() % 2 + 1; //1 o 2 armas , pero 2 no va apoder tener 
    unique_ptr<Armas> arma1= nullptr; //se guarda solo una

    if(cant_armas>=1){
    int indice = rand() % 9;// elige entre todas las armas
    arma1= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //castea el arma y le indica que objeto usar
 }
 
    return PersonajeFactory:: Creacion_Personaje_Arma(tipo, {std::move(arma1), nullptr}); //se guarda el personaje y su arma 
}

string movimiento_string(movimiento mov){ //paso a string  los enum
    switch (mov)
    {
    case movimiento::Golpe_fuerte: return "Golpe Fuerte";
    case movimiento::Golpe_rapido: return "Golpe Rapido";
    case movimiento::Defensa_golpe: return "Defensa y Golpe";
    } 
    return "Sin ataque"; 
}

movimiento Ataque_aleatorio(){
    
    int golpe = rand() % 3+1;//genera 1 2 o 3
    return static_cast<movimiento> (golpe);

}

string getNombreArma(const unique_ptr<Personajes>& p){
    const auto& armas= p->getArmas();
    return armas.first ? armas.first->getNombre() : "sin arma";
}
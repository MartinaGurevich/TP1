#include "Factory.hpp"
#pragma once
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

enum class movimiento{
    Golpe_fuerte= 1,
    Golpe_rapido= 2,
    Defensa_golpe= 3
};



shared_ptr<Personajes> rival_Aleatorio(); // persoaje 2 se le asigna un nombre y arma
string movimiento_string(movimiento mov);
movimiento Ataque_aleatorio();
string getNombreArma(shared_ptr<Personajes> p);

//vector<shared_ptr<Personajes>> daño_y_defensa(); //uso las condiciones de vida y demas de los personajes






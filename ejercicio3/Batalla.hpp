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



unique_ptr<Personajes> rival_Aleatorio(); // jugador 2 se le asigna un nombre y arma
string movimiento_string(movimiento mov); //convierte el enum mov en string
movimiento Ataque_aleatorio();// devuelve un ataque aleatorio
string getNombreArma(const unique_ptr<Personajes>& p);  //devuelve nombre de la primer arma del personaje 







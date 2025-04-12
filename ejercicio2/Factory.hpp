#pragma once

//ARMAS
#include "../ejercicio1/ARMAS/interfazArmas.hpp"//interfaz
//armas de combate
#include "../ejercicio1/ARMAS/Carpeta_combate/Espada.hpp"
#include "../ejercicio1/ARMAS/Carpeta_combate/Garrote.hpp"
#include "../ejercicio1/ARMAS/Carpeta_combate/Hachadoble.hpp"
#include "../ejercicio1/ARMAS/Carpeta_combate/Hachasimple.hpp"
#include "../ejercicio1/ARMAS/Carpeta_combate/Lanza.hpp"
#include "../ejercicio1/ARMAS/Carpeta_combate/Armascombate.hpp" //abstracta
//armas magicas
#include "../ejercicio1/ARMAS/Carpeta_items/Amuleto.hpp"
#include "../ejercicio1/ARMAS/Carpeta_items/Baston.hpp"
#include "../ejercicio1/ARMAS/Carpeta_items/ItemsMagicos.hpp" //abstracta
#include "../ejercicio1/ARMAS/Carpeta_items/LibrodeHechizos.hpp"
#include "../ejercicio1/ARMAS/Carpeta_items/Pocion.hpp"

//PERSONAJES
#include "../ejercicio1/PERSONAJES/InterfazPersonajes.hpp"//interfaz
//Magos
#include "../ejercicio1/PERSONAJES/Magos/Brujo.hpp"
#include "../ejercicio1/PERSONAJES/Magos/Conjurador.hpp"
#include "../ejercicio1/PERSONAJES/Magos/Hechicero.hpp"
#include "../ejercicio1/PERSONAJES/Magos/Magos.hpp" //abstracta 
#include "../ejercicio1/PERSONAJES/Magos/Nigromante.hpp"
//guerreros
#include "../ejercicio1/PERSONAJES/Guerreros/Barbaro.hpp"
#include "../ejercicio1/PERSONAJES/Guerreros/Caballero.hpp"
#include "../ejercicio1/PERSONAJES/Guerreros/Gladiador.hpp"
#include "../ejercicio1/PERSONAJES/Guerreros/Guerreros.hpp" //abstracta
#include "../ejercicio1/PERSONAJES/Guerreros/Mercenario.hpp"
#include "../ejercicio1/PERSONAJES/Guerreros/Paladin.hpp"


#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <string>

using namespace std;

enum class tipoArma{
    baston = 0,
    librodeHechizos= 1, 
    pocion = 2,
    amuleto = 3,
    espada = 4,
    garrote = 5,
    hachadoble = 6,
    hachasimple = 7,
    lanza = 8
};

enum class Tipopersonaje{
    brujo =0,
    conjurador = 1,
    hechicero =2,
    nigromante = 3,
    barbaro =4,
    paldin =5,
    caballero =6,
    merenario =7,
    gladiador= 8
}; 

class Factory
{
public:
    static shared_ptr<Armas> Creacion_Arma(tipoArma arma); 
    static shared_ptr<Personajes> Creacion_Personaje(Tipopersonaje personaje); 
    static shared_ptr<Personajes> Creacion_Personaje_Arma(Tipopersonaje personaje, pair<shared_ptr<Armas>, shared_ptr<Armas>> armas); 
};

//funcion para eleccion aleatoria de personajes(3 a 7)

//funcion para eleccion aleatoria de armas. (0 a 2)












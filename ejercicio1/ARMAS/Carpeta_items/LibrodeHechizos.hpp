#pragma once
#include "ItemsMagicos.hpp"
#include <vector>
#include <map>

using namespace std;


class LibrodeHechizos: public ItemsMagicos
{
private:
    map<string,int> hechizos; //hechizo y daño
    int magia; //magia de hechizos
    string compatibilidad; //guerrero baja daño
    string hechizoLanzado; //lo uso en efecto magico
    int durabilidad; //se gasta dsp de usos 


    
public:
    LibrodeHechizos(string nombre,string compatibilidad, int modelo);

    bool personaje_compatible(string compatibilidad); //mago
    int magia_actual();
    int lanzarHechizo(); //baja la durabilidad
    void cambiarHechizo(string nombre); //elijo el hechizo que quiero
    int recargar_magia();
    int durabilidad_libro(); //se va deteriorando por cada uso
    int reparar_libro();//lo reparo

    void aplicarEfectoMagico() override; //digo q efecto lance baja magia y baja durabilidad



    ~LibrodeHechizos()= default;
};



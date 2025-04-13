#pragma once
#include "ItemsMagicos.hpp"

class Pocion: public ItemsMagicos
{
private:
    string veneno; //veneno, 
    int dosisRestantes; //durabilidad
    int poder;// cuanto daña
    string compatibilidad; 
    bool vencida; //si la pocion esta vencida
public:
    Pocion(string nombre,string compatibilidad, int modelo);

    void aplicarEfectoMagico() override; //aplico veneno
    bool personaje_compatible(string compatibilidad);//
    int usarPocion(); //uso y se va gastando la cantidad
    void recargardosis(); //cuaando me quedo en cero de pocion
    void verificarvencimiento(); //si esta vencida  daña menos o cura menos

    ~Pocion()= default;
};

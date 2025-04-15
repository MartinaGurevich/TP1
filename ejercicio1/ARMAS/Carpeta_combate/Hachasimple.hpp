#pragma once
#include "Armascombate.hpp"

class Hachasimple : public Armascombate
{
private:
    int filo; // cuanto lastima
    int desgaste;// cuanto falta para afilarla

    
public:
    Hachasimple(string nombre,string compatibilidad, int modelo, int peso);

    void golpeEspecial() override;//metodo de la abstracta

    void afilar();//si use todo el filo que tenia 
    void usar(); //la uso la uso y se le baja el filo. GOLPE NORMAL 
    
    //get
    int getFilo();
    int getDesgaste();


    ~Hachasimple()= default;
};



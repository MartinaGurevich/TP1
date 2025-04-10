#pragma once
#include "Armascombate.hpp"

class Hachasimple : public Armascombate
{
private:
    int filo; //es cuanto lastima
    int desgaste;// cuanto falta para afilarla
    string material;
    float prob_golpeCritico; //lo uso en golpe especial
    string compatibilidad;

    
public:
    Hachasimple(string nombre, int daño,string compatibilidad, int modelo, string material);

    void golpeEspecial() override;//metodo de la abstracta

    void afilar();//si use todo el filo que tenia 
    void usar(); //la uso la uso y se le baja el filo
    bool esCritico(); //golpe critico aplicado en el golpe especial 
    bool compatible(string compatibilidad);
    //get
    int getFilo();
    int getDesgaste();
    string getMaterial();
    float getProbCritico();


    ~Hachasimple()= default;
};



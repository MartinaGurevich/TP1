#pragma once
#include "Armascombate.hpp"

class Hachasimple : public Armascombate
{
private:
    int filo; //es cuanto lastima
    int desgaste;// cuanto falta para afilarla
    string Estado;
    int golpeCritico; //lo uso en golpe especial
    string compatibilidad;

    
public:
    Hachasimple(string nombre, int daño,string compatibilidad, int modelo,string material,  int critico);

    void golpeEspecial() override;//metodo de la abstracta

    void afilar();//si use todo el filo que tenia 
    void usar(); //la uso la uso y se le baja el filo. GOLPE NORMAL 
    bool compatible(string compatibilidad);
    bool esCritico(); //golpe critico aplicado en el golpe especial 
    string estadoHacha(); //dice en que condicion esta.
    //get
    int getFilo();
    int getDesgaste();
    string getEstado();
    int getCritico();


    ~Hachasimple()= default;
};



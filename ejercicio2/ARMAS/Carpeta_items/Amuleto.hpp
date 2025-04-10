#pragma once
#include "ItemsMagicos.hpp"


class Amuleto : public ItemsMagicos
{
private:
    string elemento; //agua,aire,tierra
    bool activado; //si esta activado usa todo su daño, si esta desactivado usa mitad
    int cargas; //si se queda sin cargas esta descativao
    int Poderdaño; //cuanto daño hace
    string compatibilidad; //magos
public:
    Amuleto(string nombre, int daño,string compatibilidad, int modelo);
    
    void aplicarEfectoMagico() override; //aplica el elemento y le sacaca cargas

    bool personaje_compatible(string compatibilidad);//mago 
    void activar();//la magia q tiene 
    void desactivar(); //desactiva manualmente el amuleto, usa la mitad de su magia
    void recargar();//llego al limite de uso, lo recargo
    int poderDaño(); //cuanto daña 


    ~Amuleto()= default;
} ;


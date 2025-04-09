#include "interfazArmas.hpp"

using namespace std;

class ItemsMagicos: public Armas//clase abstracata 
{
private:
    string nombre;
    int daño;
    int peso;
    int modelo;
    string tipodeArma; 

public:
 
    //metodo virtual puro de esta clase abstracta 
    virtual void aplicarEfectoMagico()=0; //le aplico 

    ItemsMagicos(string nombre, string tipodeArma);

    int getpeso() override;
    string getNombre() override;
    void aumentarDaño() override;
    string getModelo() override;
    string getTipodearma() override;
   
    ~ItemsMagicos()= default;
};



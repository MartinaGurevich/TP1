#include "interfazArmas.hpp"

class Armascombate: public Armas
{
private:
    string nombre;
    int daño;
    int peso;
    int modelo;
    string tipodeArma; 
public:
    
    Armascombate(string nombre, string tipodeArma);

    virtual void golpeEspecial()=0 ; //cada arma puede tener su proopio golpe especial
    
    int getpeso() override;
    string getNombre() override;
    void aumentarDaño() override;
    string getModelo() override;
    string getTipodearma() override;

    ~Armascombate()=default;
};


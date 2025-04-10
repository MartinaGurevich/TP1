#include "ItemsMagicos.hpp"

class Baston: public ItemsMagicos
{
private:
    int cargasMaximas=500; //cargas maximas uwe se puede recargar el baston
    string efectoespecial;
    string compatibilidad;
    int durabilidad; // cuando  golpea baja la durabilidad del baston tambien
    int energia; // la aenergia que le queda al baston para pegar

public:
    Baston(string nombre, int daño,string compatibilidad, int modelo);

  
    bool personaje_compatible(string compatibilidad); //me dice si es mago lo puedo usar, sino le resta daño q hace 
    int vida_restante(); //se va bajando -1 cada vez q el baston golpea, si se rompe cambip de arma 
    void reparar_baston(); //lo reparo si se gasta la durabilidad
    int energia_baston();
    int recargar_energia();

    //metodo de abstracta
    void aplicarEfectoMagico() override; //le da un efecto magico mas, por ejemplo quema cuando pega que queme

    ~Baston()= default;
};



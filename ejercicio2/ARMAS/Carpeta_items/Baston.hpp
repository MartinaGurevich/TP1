#include "ItemsMagicos.hpp"

class Baston: public ItemsMagicos
{
private:
    string nombre;
    int dañoMagico;
    string Compatibilidad;
    int durabilidad; // cuando  golpea baja la durabilidad del baston tambien
    int energia; // la aenergia que le queda al baston para pegar

public:
    Baston(string nombre, int daño);

  
    bool personaje_compatible(string compatibilidad); //me dice si es mago lo puedo usar, sino le resta daño q hace 
    int vida_restante(int durabilidad); //se va bajando -1 cada vez q el baston golpea, si se rompe cambip de arma 
    void reparar_baston(int durabilidad); //lo reparo si se gasta la durabilidad
    int energia_baston(int energia);
    int recargar_energia();

    //metodo de abstracta
    void aplicarEfectoMagico() override; //le da un efecto magico mas, por ejemplo quema cuando pega 
    int getpeso() override;
    string getNombre() override;
    void aumentarDaño() override;
    string getModelo() override; //año del arma
    string getTipodearma() override; //tipo magico o el otro








    void aplicarEfectoMagico();

    ~Baston();
};



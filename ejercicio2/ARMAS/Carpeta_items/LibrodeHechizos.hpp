#include "ItemsMagicos.hpp"
#include <vector>
#include <map>

using namespace std;


class LibrodeHechizos: public ItemsMagicos
{
private:
    map<string,int> hechizos; //hechizo y daño
    int magia; //magia de hechizos
    string compatibilidad; //con guerrero baja daño
    string hechizoLanzado; //lo uso en efecto magico
    int durabilidad; //se gasta dsp de usos 


    
public:
    LibrodeHechizos(string nombre, int daño,string compatibilidad, int modelo);

    bool personaje_compatible(string compatibilidad); //me dice si es mago lo puedo usar, sino le resta daño q hace 
    int magia_actual();
    void lanzarHechizo(); //baja la magia
    void cambiarHechizo();
    int recargar_magia();
    int durabilidad_libro(); //se va deteriorando por cada uso
    int reparar_libro();//lo reparo

    void aplicarEfectoMagico() override; //digo q efecto lance cuando lanzo hechizo baja magia y baja durabilidad



    ~LibrodeHechizos()= default;
};



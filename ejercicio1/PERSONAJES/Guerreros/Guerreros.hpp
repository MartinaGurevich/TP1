#include "InterfazPersonajes.hpp"
#include <memory>
#pragma once


class Guerreros: public Personajes
{
protected:
    string nombre;    
    int vida;
    pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS;
    int daño_obtenido;
    int nivel; //nivel del personaje
public:
    Guerreros(string nombre, int nivel, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS);
    
    virtual void ArmaduraEspecial()=0; //armadura especial para guerreros. Reduce daño ejercido
 
    
    void setArma_1(shared_ptr<Armas> arma);
    void setArma_2(shared_ptr<Armas> arma);
    void aumentar_vida(int cantidad);

    //metodos de la interfaz
    pair<shared_ptr<Armas>,shared_ptr<Armas>> getArmas() const override;  //le doy la posibilidad a todos los persoajes de tener dos armas
    string getNombre() override;//mago o guerrero
    int getSalud() override;//dañogenerado
    void atacar(Personajes& objetivo_de_ataque) override;
    void Recibir_daño() override; //me saca vida
    void curar() override;
    void mostrarInfo() override; 
    void setDaño_obtenido(int daño) override;
   

    ~Guerreros()= default;
};


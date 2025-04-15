#include <iostream>
#include <memory>

#include "PERSONAJES/InterfazPersonajes.hpp"
#include "ARMAS/interfazArmas.hpp"

#include "ARMAS/Carpeta_combate/Armascombate.hpp"
#include "ARMAS/Carpeta_items/ItemsMagicos.hpp"

#include "ARMAS/Carpeta_items/LibrodeHechizos.hpp"
#include "ARMAS/Carpeta_combate/Espada.hpp"

#include "PERSONAJES/Guerreros/Guerreros.hpp"
#include "PERSONAJES/Magos/Magos.hpp"

#include "PERSONAJES/Guerreros/Gladiador.hpp"
#include "PERSONAJES/Magos/Brujo.hpp"

using namespace std;

int main(){
//PRUEBO ARMAS PRIMERO

    //CREO ESPADA
    Espada Miespada("ESPADA", "Caballero", 2005, 10);

    //muestros datos
    cout<<"-- DATOS DE LA ESPADA--"<<endl;
    cout<<"--> NOMBRE: "<<Miespada.getNombre()<<endl;
    cout<<"--> TIPO DE ARMA: "<<Miespada.getTipodearma()<<endl;
    cout<<"--> MODELO: "<<Miespada.getModelo()<<endl;
    cout<<"--> PESO: "<<Miespada.getpeso()<<endl;
    cout<<"--> DAÑO BASE: "<<Miespada.getDaño()<<endl;
    //cout<<"--> COMPATIBILIDAD: "<<Miespada.compatible("Guerrero")<<endl;
    cout<<endl;

    //CREO LIBRO DE HECHIZOS
    LibrodeHechizos Milibro("Libro de Hechizos", "Mago", 2023);
        //muestros datos
    cout<<"-- DATOS DEL LIBRO--"<<endl;
    cout<<"--> NOMBRE: "<<Milibro.getNombre()<<endl;
    cout<<"--> TIPO DE ARMA: "<<Milibro.getTipodearma()<<endl;
    cout<<"--> MODELO: "<<Milibro.getModelo()<<endl;
    cout<<"--> PESO: "<<Milibro.getpeso()<<endl;
    cout<<"--> DAÑO BASE: "<<Milibro.getDaño()<<endl;
    //cout<<"--> COMPATIBILIDAD: "<<Milibro.personaje_compatible("Mago")<<endl;
    cout<<endl;

//PRUEBA DE PERSONAJES PORTANDO ARMAS
    shared_ptr<Armas> libro = make_shared<LibrodeHechizos>("Libro de Hechizos", "Mago", 2023);
    shared_ptr<Armas> espada = make_shared<Espada>("ESPADA", "Caballero", 2005, 10);

    //compatibilidad
    cout<<" \n ----- VERIFICO COMPATIBILIDAD EN ARMAS -----\n";
    dynamic_cast<LibrodeHechizos*>(libro.get())->personaje_compatible("Mago");
    dynamic_cast<Espada*>(espada.get())->compatible("Mago");

    //creo personajes
    Brujo brujo("Juan", {libro, espada}); //mago con libro y espada
    Gladiador gladiador ("Luis", {espada, nullptr}); //gladiador solo con espada

    //muestro info
    cout<<" ---------------- INFORMACION PERSONAJES ------------"<<endl;
    brujo.mostrarInfo();
    cout<<endl;
    gladiador.mostrarInfo();

    //pruebo individualmente sus armas
    cout<<"--> EL BRUJO LANZA UN HECHIZO ESPECIFICO: "<<endl;
    auto libro_ptr= dynamic_cast<LibrodeHechizos*>(brujo.getArmas().first.get());

    libro_ptr-> cambiarHechizo("Explosion");
    libro_ptr-> lanzarHechizo();

    cout<<"--> EL GLADIADOR USA SU ESPADA (y la desafila): "<<endl;
    auto espada_ptr= dynamic_cast<Espada*>(gladiador.getArmas().first.get());

    for(int i =0; i<3; i++){
        espada_ptr->golpe();
        cout<< "Filo restante de la espada: "<< espada_ptr->getFilo()<<endl; //muestra cuanto filo le queda
    }

    cout<<"\n ------ ESPADA del galdiador con su golpe especial (aumenta su longitud) ----------\n";
    espada_ptr->golpeEspecial();

    //SIMULACION DE COMBATE
    cout<<"\n ------ COMBATE: gladiador ataca a brujo ----------\n";
    gladiador.atacar(brujo);

    cout<<"\n ------ COMBATE:Brujo ataca Gladiador ----------\n";
    brujo.atacar(gladiador);


    //info final 
    cout<<"\n --- INFO FINAL ----\n";
    brujo.mostrarInfo();
    cout<<endl;
    gladiador.mostrarInfo();

    return 0;



    


    
}

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

    //CREO ESPADA y LIBRO
    unique_ptr<Armas> libro = make_unique<LibrodeHechizos>("Libro de Hechizos", "Mago", 2023);
    unique_ptr<Armas> espada = make_unique<Espada>("Espada", "Caballero", 2005, 10);

    //muestros datos (antes de  mover)
    cout<<" \n ========= DATOS DE LA ESPADA =========="<<endl;
    cout<<"--> NOMBRE: "<<espada->getNombre()<<endl;
    cout<<"--> TIPO DE ARMA: "<<espada-> getTipodearma()<<endl;
    cout<<"--> MODELO: "<<espada-> getModelo()<<endl;
    cout<<"--> PESO: "<<espada-> getpeso()<<endl;
    cout<<"--> DAÑO BASE: "<<espada-> getDaño()<<endl;
    cout<<endl;

    //CREO LIBRO DE HECHIZOS
    LibrodeHechizos Milibro("Libro de Hechizos", "Mago", 2023);
        //muestros datos
    cout<<"========= DATOS DEL LIBRO DE HECHIZOS =========="<<endl;
    cout<<"--> NOMBRE: "<<libro -> getNombre()<<endl;
    cout<<"--> TIPO DE ARMA: "<<libro -> getTipodearma()<<endl;
    cout<<"--> MODELO: "<<libro -> getModelo()<<endl;
    cout<<"--> PESO: "<<libro -> getpeso()<<endl;
    cout<<"--> DAÑO BASE: "<<libro -> getDaño()<<endl;
    cout<<endl;

//PRUEBA DE PERSONAJES PORTANDO ARMAS

    //compatibilidad
    cout<<" \n ===============  VERIFICO COMPATIBILIDAD EN ARMAS =============== \n";
    cout<<"Compatibilidad para que un mago use libro de hechizos: \n";
    dynamic_cast<LibrodeHechizos*>(libro.get())->personaje_compatible("Mago");
    cout<<"Compatibilidad para que un mago use espada: \n";
    dynamic_cast<Espada*>(espada.get())->compatible("Mago");

    //creo personajes, MUEVO LAS ARMAS A LOS PERSONAJES
    Brujo brujo("Juan", {std:: move(libro), std:: move(espada)}); //mago con libro y espada
    
    cout<<"\n Creacion de espada2..."<< endl;

    unique_ptr<Armas> espada2 = make_unique<Espada>("Espada2", "Caballero", 2005, 10);
    
    Gladiador gladiador ("Luis", {std:: move(espada2), nullptr}); //gladiador solo con espada

    //muestro info
    cout<<"\n ============= INFORMACION PERSONAJES =============="<<endl;
    brujo.mostrarInfo();
    cout<<endl;
    gladiador.mostrarInfo();

    //pruebo individualmente sus armas
    cout<<"\n =============  EL BRUJO LANZA UN HECHIZO ESPECIFICO: =============="<<endl;
    auto libro_ptr= dynamic_cast<LibrodeHechizos*>(brujo.getArmas().first.get());
    if(libro_ptr){
        libro_ptr-> cambiarHechizo("Explosion");
        libro_ptr-> lanzarHechizo(); 
    }

   

    cout<<" \n ============== EL GLADIADOR USA SU ESPADA (y la desafila): =============="<<endl;
    auto espada_ptr= dynamic_cast<Espada*>(gladiador.getArmas().first.get()); //espada 2, la del gladiador
    if (espada_ptr){ 
        for(int i =0; i<3; i++){
        espada_ptr->golpe();
        cout<< "Filo restante de la espada: "<< espada_ptr->getFilo()<<endl; //muestra cuanto filo le queda
    }    
    
    cout<<"\n ==============ESPADA del galdiador con su golpe especial (aumenta su longitud) ============== \n";
    espada_ptr->golpeEspecial();
}
   



    //SIMULACION DE COMBATE
    cout<<"\n ============== COMBATE: gladiador ataca a brujo ==============\n";
    gladiador.atacar(brujo);

    cout<<"\n ============== COMBATE: Brujo ataca  a Gladiador ==============\n";
    brujo.atacar(gladiador);


    //info final 
    cout<<"\n ======= INFO FINAL ======\n";
    brujo.mostrarInfo();
    cout<<endl;
    gladiador.mostrarInfo();

    return 0;
}

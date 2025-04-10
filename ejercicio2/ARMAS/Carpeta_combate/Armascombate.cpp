#include "Armascombate.hpp"


//constructor 
Armascombate:: Armascombate(string nombre, string tipodeArma,  int daño, int peso, int modelo): 
    nombre(nombre),
    daño(daño),
    peso(peso),
    modelo(modelo),
    tipodeArma(tipodeArma) 
{
    if(modelo <= 2010) {  //cuadno es mas grande que las nuevas daña mas
        aumentarDaño();
        cout<<"Item con experiencia... modelo : "<<modelo<<".Aumenta su daño a:"<<getDaño()<<endl;
    }
}

//modifico daño segun la condicion
void Armascombate :: setDaño(int nuevoDaño){
    daño= nuevoDaño;
}

//constructores para metodos de la interfaz

int Armascombate:: getpeso(){
    return peso;
}

string Armascombate:: getNombre(){
    return nombre;
}

void Armascombate:: aumentarDaño(){
    daño += 5; //aumenta el daño real del arma
    return ;  //aumenta el daño segun alguna condicion 
}


int Armascombate:: getDaño(){
    return daño;
}

int Armascombate :: getModelo(){
    return modelo; 
}

string Armascombate:: getTipodearma(){
    if (tipodeArma=="Baston" ||tipodeArma=="LibrodeHechizos" ||tipodeArma=="Pocion" ||tipodeArma=="Amuleto" ){
        return "Item Magico";
    }
    return "Arma de Combate";
}

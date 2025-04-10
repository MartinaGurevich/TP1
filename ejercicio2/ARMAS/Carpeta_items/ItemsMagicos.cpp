#include "ItemsMagicos.hpp"

//constructor 
ItemsMagicos:: ItemsMagicos(string nombre, string tipodeArma,  int daño, int peso, int modelo): nombre(nombre) ,tipodeArma(tipodeArma),  daño(daño),  peso(peso),  modelo(modelo) {}

//constructores para metodos de la interfaz

int ItemsMagicos:: getpeso(){
    return peso;
}

string ItemsMagicos:: getNombre(){
    return nombre;
}

void ItemsMagicos:: aumentarDaño(){
    daño += 10; //aumenta el daño real del arma
    return ;  //aumenta el daño segun alguna condicion 
}

//modifio daño segun la condicion
void ItemsMagicos :: setdaño(int nuevoDaño){
    daño= nuevoDaño;
    
}

int ItemsMagicos:: getdaño(){
    return daño;
}

int ItemsMagicos :: getModelo(){
    if(modelo <= 2010) {  //cuadno es mas grande que las nuevas daña mas
        aumentarDaño();//codiciones tipo si el arma es menor al 2010, daña mas;
    }
    return modelo; //sino hace un daño normal... 
}

string ItemsMagicos:: getTipodearma(){
    if (tipodeArma=="Baston" ||tipodeArma=="LibrodeHechizos" ||tipodeArma=="Pocion" ||tipodeArma=="Amuleto" ){
        return "Item Magico";
    }
    return "Arma de Combate";
}




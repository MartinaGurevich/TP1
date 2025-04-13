#include "ItemsMagicos.hpp"

//constructor 
ItemsMagicos:: ItemsMagicos(string nombre, string tipodeArma,  int daño, int peso, int modelo): 
    nombre(nombre),
    daño(daño),
    peso(peso),
    modelo(modelo),
    tipodeArma(tipodeArma) 
{
    if(modelo <= 2010) {  //cuadno es mas grande que las nuevas daña mas
        aumentarDaño();
        cout<<getNombre()<<" --> Es un Item con experiencia... modelo : "<<modelo<<".Aumenta su daño a:"<<getDaño()<<endl;
    }
}

//constructores para metodos de la interfaz

int ItemsMagicos:: getpeso(){
    return peso;
}

string ItemsMagicos:: getNombre(){
    return nombre;
}

void ItemsMagicos:: aumentarDaño(){
    daño += 5; //aumenta el daño real del arma
    return ;  //aumenta el daño segun alguna condicion 
}

//modifio daño segun la condicion
void ItemsMagicos :: setDaño(int nuevoDaño){
    daño= nuevoDaño;

}

int ItemsMagicos:: getDaño(){
    return daño;
}

int ItemsMagicos :: getModelo(){
    return modelo; 
}

string ItemsMagicos:: getTipodearma(){
    if (tipodeArma=="Baston" ||tipodeArma=="LibrodeHechizos" ||tipodeArma=="Pocion" ||tipodeArma=="Amuleto" ){
        return "Item Magico";
    }
    return "Arma de Combate";
}




#include "Armascombate.hpp"


//constructor 
Armascombate:: Armascombate(string nombre, string tipodeArma,  int daño, int modelo, int peso, string compatibilidad): 
    nombre(nombre),
    daño(daño),
    peso(peso),
    modelo(modelo),
    tipodeArma(tipodeArma),
    compatibilidad(compatibilidad)
{
    if(modelo <= 2010) {  //cuadno es mas grande que las nuevas daña mas
        aumentarDaño();
        cout<<"Item con experiencia... modelo : "<<modelo<<".Aumenta su daño a:"<<getDaño()<<endl;
    }
}

bool Armascombate:: compatible(string compatibilidad){
    {
        if(compatibilidad=="Guerrero"){
            cout<<"Arma compatible para un Gurerrero"<<endl;
            return true;
        }else{
            cout<<"Item NO compatible, daño reducido."<<endl;
            //disminuye el daño en 5 puntos si es un Guerrero.
            int dañoActual= getDaño();
            setDaño(dañoActual - 5);
    
            cout<<"El Hachasimple daña "<<getDaño()<< " porque usted es Mago."<<endl;
    
            return false;
        }
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
 //aumenta el daño segun alguna condicion 
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

#include "Hachasimple.hpp"

//constructor hacha
Hachasimple:: Hachasimple(string nombre, int daño, string compatibilidad,int modelo, string material): 
    Armascombate(nombre, "Hachasimple", daño, 10 , modelo),
    prob_golpeCritico(prob_golpeCritico),
    filo(20), //cuanto lastima
    desgaste(50), //se puede usar 50 veces hasta q se le vaya el filo
    compatibilidad(compatibilidad) {}

void Hachasimple:: afilar(){
    if (filo==0){
        filo= 20;
        desgaste= 50;
    }
}

void Hachasimple:: usar(){
    desgaste--;
    if(desgaste == 0){
        cout<< "el HachaSimple ya no tiene filo"<<endl;
        afilar();
    }
}

bool Hachasimple:: esCritico(){
    if(desgaste <=10){
        //nose como hacer este metodo 
    }
}

bool Hachasimple:: compatible(string compatibilidad){
        if(compatibilidad=="Guerrero"){
            cout<<"Arma compatible para un Gurerrero"<<endl;
            return true;
        }else{
            cout<<"Item NO compatible, daño reducido."<<endl;
            //disminuye el daño en 5 puntos si es un Guerrero.
            int dañoActual= getDaño();
            setDaño(dañoActual - 5);
    
            cout<<"El baston daña "<<getDaño()<< " porque usted es Mago."<<endl;
    
            return false;
        }
    }






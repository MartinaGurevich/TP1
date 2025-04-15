#include "Hachasimple.hpp"

//constructor hacha
Hachasimple:: Hachasimple(string nombre, string compatibilidad,int modelo, int peso): 
    Armascombate(nombre, "Hachasimple", 20, modelo, peso, compatibilidad), //20 de daño base
    filo(20), //cuanto lastima
    desgaste(50){}

void Hachasimple:: afilar(){
    if (filo==0){
        filo= 20;
        desgaste= 50;
    }
}

void Hachasimple:: usar(){
    if(filo > 0 && desgaste > 0){    
        desgaste--;
        filo--;
    }

    if(filo <= 0 && desgaste>0){
        cout<< "el HachaSimple ya no tiene filo. Se afila automaticamente"<<endl;
        afilar();
    }
}

void Hachasimple :: golpeEspecial(){
    usar(); //se desgaste porque la uso
    
    int dañobase= getDaño();
    int Dañoespecial= filo; //el filo es lo que daña al enemigo
    
    if(filo==20 && desgaste >= 45){
        Dañoespecial+= 20 ; //le hace mas daño por ser Critico, bien afilado
        cout<<"¡Daño especial CRITICO! "<<endl;
    }else{
        cout<<"Golpe normal."<<endl;
    }
    int dañoTotal= dañobase + Dañoespecial;
    cout<< "Daño total es: "<< dañoTotal<<endl;
}



int Hachasimple :: getFilo(){
    return filo;
}
int Hachasimple ::getDesgaste(){
    return desgaste;
}



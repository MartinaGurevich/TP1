#include "Hachasimple.hpp"

//constructor hacha
Hachasimple:: Hachasimple(string nombre, int daño, string compatibilidad,int modelo,string Estado, int critico): 
    Armascombate(nombre, "Hachasimple", daño, 10 , modelo),
    filo(20), //cuanto lastima
    desgaste(50), //se puede usar 50 veces hasta q se le vaya el filo
    Estado(Estado),
    golpeCritico(critico), //hace daño critico por estar afilada
    compatibilidad(compatibilidad) {}

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


bool Hachasimple:: compatible(string compatibilidad){
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


bool Hachasimple:: esCritico(){
    if(filo==20 && desgaste >= 45){
        cout<<"Daño CRITICO. El hacha bien afilada!"<<endl;
        return true;
    }
    return false;
}

void Hachasimple :: golpeEspecial(){
    usar(); //se desgaste porque la uso
    
    int dañobase= getDaño();
    int Dañoespecial= filo; //el filo es lo que daña al enemigo
    
    if(esCritico()){
        Dañoespecial+= golpeCritico ; //le hace mas daño por ser Critico, bien afilado
        cout<<"¡Daño especial CRITICO! "<<endl;
    }else{
        int dañoTotal= dañobase + Dañoespecial;
        cout<<"Golpe especial normal."<<endl;
    }
    int dañoTotal= getDaño()+ Dañoespecial;
    cout<< "Daño total es: "<< dañoTotal<<endl;
}

string Hachasimple:: estadoHacha(){
    if (filo==20 && desgaste >= 45){
        return "Optima";
    }else if(filo < 20 && desgaste <40){
        return "usada";
    }else{
        return "Normal";
    }
}


int Hachasimple :: getFilo(){
    return filo;
}
int Hachasimple ::getDesgaste(){
    return desgaste;
}
string Hachasimple :: getEstado(){
    return Estado;
}
int Hachasimple :: getCritico(){
    return golpeCritico;
}



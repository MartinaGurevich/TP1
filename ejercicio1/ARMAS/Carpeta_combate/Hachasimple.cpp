#include "Hachasimple.hpp"

//constructor hacha
Hachasimple:: Hachasimple(string nombre, int daño, string compatibilidad,int modelo, int peso): 
    Armascombate(nombre, "Hachasimple", daño, modelo, peso, compatibilidad),
    filo(20), //cuanto lastima
    desgaste(50){}
    //compatibilidad(compatibilidad){}

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


// bool Hachasimple:: compatible(string compatibilidad){
//         if(compatibilidad=="Guerrero"){
//             cout<<"Arma compatible para un Gurerrero"<<endl;
//             return true;
//         }else{
//             cout<<"Item NO compatible, daño reducido."<<endl;
//             //disminuye el daño en 5 puntos si es un Guerrero.
//             int dañoActual= getDaño();
//             setDaño(dañoActual - 5);
    
//             cout<<"El Hachasimple daña "<<getDaño()<< " porque usted es Mago."<<endl;
    
//             return false;
//         }
//     }


// bool Hachasimple:: esCritico(){
//     if(filo==20 && desgaste >= 45){
//         cout<<"Daño CRITICO. El hacha bien afilada!"<<endl;
//         return true;
//     }
//     return false;
// }

void Hachasimple :: golpeEspecial(){
    usar(); //se desgaste porque la uso
    
    int dañobase= getDaño();
    int Dañoespecial= filo; //el filo es lo que daña al enemigo
    
    if(filo==20 && desgaste >= 45){
        Dañoespecial+= 20 ; //le hace mas daño por ser Critico, bien afilado
        cout<<"¡Daño especial CRITICO! "<<endl;
    }else{
        cout<<"Golpe especial normal."<<endl;
    }
    int dañoTotal= dañobase+ Dañoespecial;
    cout<< "Daño total es: "<< dañoTotal<<endl;
}



int Hachasimple :: getFilo(){
    return filo;
}
int Hachasimple ::getDesgaste(){
    return desgaste;
}



#include "Baston.hpp"
using namespace std;

Baston:: Baston(string nombre, int daño,string compatibilidad, int modelo):
    ItemsMagicos("Baston Magico", "Item Magico", 17, 55, 1900), 
    compatibilidad(compatibilidad),
    durabilidad(100),
    energia(100),
    efectoespecial("quemadura"){};

bool Baston:: personaje_compatible(string compatibilidad){
    if(compatibilidad=="Magos"){
        cout<<"Item compatible para un Mago"<<endl;
        return true;
    }else{
        cout<<"Item NO compatible, daño reducido."<<endl;
        //disminuye el daño en 5 puntos si es un Guerrero.
        int dañoActual= getdaño();
        setdaño(dañoActual - 5);

        cout<<"El baston daña"<<setdaño<< "porque usted es gurerrero"<<endl;

        return false;
    }
}

int Baston:: vida_restante(){
    //baja -1 cada vez que se usa el baston 
    if("Baston"){
        durabilidad -= 1;
        cout << "Al baston le queda"<<durabilidad<<"de durabilidad."<<endl;
        return durabilidad;
    }else if(durabilidad == 0){
        cout<<"El baston se rompio. No se puede usar mas hasta repararlo"<< endl;
    }
}

void Baston:: reparar_baston(){
    if(durabilidad == 0){
        durabilidad += 100; //lo reparo y queda como nuevo 
    }
}

int Baston:: energia_baston(){
    //si se usa el baston se baja un 3% su enegia
    if("Baston"){
        energia -= 3;
        cout << "Al baston le queda"<<energia<< " %""de energia."<<endl;
        return energia;
    }else if(energia == 0){
        cout<<"Baston sin energia. No se puede usar hasta recargarlo"<< endl;
    }
}

int  Baston:: recargar_energia(){
    if(energia == 0){
        energia += 100; //lo cargo y lo puedo usar
    }
}

void Baston:: aplicarEfectoMagico(){
    if (energia == 10){ //si tengo solo 10 de energia puedo usarlo para dañar mas con mis ultimas fuerzas
        int dañoActual= getdaño();
        setdaño(dañoActual + 5 );
        cout<<"El baston saca sus ultimas fuerzas. Aplica efecto mágico y daña mas."<<endl;
    }
}








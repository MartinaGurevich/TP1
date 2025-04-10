#include "Baston.hpp"
using namespace std;

Baston:: Baston(string nombre, int daño,string compatibilidad, int modelo):
    ItemsMagicos(nombre, "Baston", daño, 5 , modelo),  
    efectoespecial("quemadura"),
    compatibilidad(compatibilidad),
    durabilidad(50),
    energia(100){};

bool Baston:: personaje_compatible(string compatibilidad){
    if(compatibilidad=="Mago"){
        cout<<"Item compatible para un Mago"<<endl;
        return true;
    }else{
        cout<<"Item NO compatible, daño reducido."<<endl;
        //disminuye el daño en 5 puntos si es un Guerrero.
        int dañoActual= getDaño();
        setDaño(dañoActual - 5);

        cout<<"El baston daña "<<getDaño()<< " porque usted es Gurerrero."<<endl;

        return false;
    }
}

int Baston:: vida_restante(){
    //baja -2 cada vez que se usa el baston 
    durabilidad -= 5;
    if(durabilidad> 0){
        cout << "Al baston le queda :"<<durabilidad<<"de durabilidad."<<endl;
    }else if(durabilidad == 0){
        cout<<"El baston se rompio. No se puede usar mas hasta repararlo"<< endl;
    }
    return durabilidad;
}

void Baston:: reparar_baston(){
    if(durabilidad <= 0){
        durabilidad = 50;//lo reparo y queda como nuevo 
        cout<<"el baston fué completamente reparado."<<endl;
    }
}

int Baston:: energia_baston(){
    //muestra energia que le queda
    cout << "Energia actual del baston: "<<energia<< " %."<<endl;
    return energia;
}

int  Baston:: recargar_energia(){
    energia = 100; //lo cargo y lo puedo usar
    cout<< "energia del baston totalmente recargada."<<endl;
    return energia;
}

void Baston:: aplicarEfectoMagico(){
    //si no tiene energia no puede hacer nada, debe llamar a recrgar
    if(energia<= 0){
        cout<<"El baston no tiene energia. No se puede aplicar efecto magico hasta recargar."<<endl;
        recargar_energia();
    }
    cout<<"El baston aplica su efecto magico: "<<efectoespecial<<endl;
    if (energia <= 10){ //si tengo menos de 10 de energia puedo usarlo para dañar mas con mis ultimas fuerzas
        cout<<"Ultimo ezfuerzo! El baston libera un golpe potenciado. "<< endl;
        int dañoActual= getDaño();
        setDaño(dañoActual + 5 );
        cout<<"Nuevo daño potenciado:"<<getDaño()<<endl;
    }
    energia -=10; //pegar de cualquier forma le saca 10 de energia
    vida_restante();
    if(energia< 0) energia =0;

    cout<<"Energia restante del baston: "<<energia<<"%"<<endl;
}










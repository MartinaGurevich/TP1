#include "Magos.hpp"

Magos:: Magos(string nombre,int nivel, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS):
nombre(nombre), vida(100), ARMAS(ARMAS), nivel(nivel) {}

//SETTERS
void Magos:: setDaño_obtenido(int daño){ 
    daño_obtenido = daño;  //modifico el daño que obtuve
}

void Magos:: setArma_1(shared_ptr<Armas> arma){
    ARMAS.first= arma;
}

void Magos:: setArma_2(shared_ptr<Armas> arma){
    ARMAS.second= arma;
}

//metodos de la interfaz
pair<shared_ptr<Armas>,shared_ptr<Armas>> Magos:: getArmas() const{ //le doy la posibilidad a todos los persoajes de tener dos armas
    return ARMAS;
} 

    //getters
string Magos:: getNombre(){
    return nombre;
}
int Magos:: getSalud(){
    return vida;
}


void Magos:: atacar(Personajes& objetivo_de_ataque){
    int DañoTotal=0;
    
    if(!ARMAS.first && !ARMAS.second){
        cout<<nombre<< "intenta atacar pero no tiene armas"<<endl;
        return;
    }   
    //si tiene  el arma uno
    if(ARMAS.first) {
        int daño1= ARMAS.first->getDaño();
        DañoTotal += daño1;
        cout<<"- "<< nombre<< "  Ataca con "<<ARMAS.first->getNombre()
            <<", causa "<<daño1<<" puntos de daño."<<endl;
    }
    //si tiene el arma dos.
    if(ARMAS.second) {
        int daño2= ARMAS.second->getDaño();
        DañoTotal+= daño2;

        cout<<"-"<<  nombre<< " Ataca con "<<ARMAS.second->getNombre()
            <<", causa "<<daño2<< " de daño."<<endl;
    }
    cout<<"--> "<<  nombre<<" en total causa "<<DañoTotal<<" puntos de daño a "<<objetivo_de_ataque.getNombre()<<endl;
    objetivo_de_ataque.setDaño_obtenido(DañoTotal);
    objetivo_de_ataque.Recibir_daño();
}



void Magos::Recibir_daño(){//me saca vida

        vida -= daño_obtenido;
        if (vida < 0) vida=0;
        curar();
        cout<<nombre<<"tiene  "<< vida<< " puntos de vida restante"<<endl;

}

void Magos:: curar(){
    if(vida == 0){ 
        cout<<"el enemigo murio"<<endl;
        cout<<"Curando..."<<endl;
        vida= 100;
    }
}
void Magos:: mostrarInfo() {
    if(ARMAS.first){
        cout<<"--> Primer arma que tiene el mago: " <<ARMAS.first->getNombre()<<endl;
    }else{
        cout<<" --> No tiene primer arma"<<endl;
    }
    if(ARMAS.second){
        cout<<"--> Segunda arma que tiene el mago: " <<ARMAS.second->getNombre()<<endl;
    }else{
        cout<<" --> No tiene Segunda arma"<<endl;
    }
    cout<<"--> Nivel del mago: " <<nivel<<endl;
    cout<<"--> Vida restante del mago: " <<getSalud()<<endl;

}

void Magos:: aumentar_vida(int cantidad){
    vida+= cantidad;
    if(vida> 100) vida=100;
    cout<<nombre<<" Aumenta su vida un  "<<cantidad<< " . Vida actual: "<<vida<< endl; 
}
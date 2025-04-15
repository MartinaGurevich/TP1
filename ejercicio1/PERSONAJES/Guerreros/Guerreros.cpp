#include "Guerreros.hpp"

Guerreros:: Guerreros(string nombre,int nivel, pair<shared_ptr<Armas>, shared_ptr<Armas>> ARMAS):
nombre(nombre), vida(100), ARMAS(ARMAS), daño_obtenido(0), nivel(nivel) {}

//SETTERS
void Guerreros:: setDaño_obtenido(int daño){ 
    daño_obtenido = daño;  //modifico el daño que obtuve
}

void Guerreros:: setArma_1(shared_ptr<Armas> arma){
    ARMAS.first= arma;
}

void Guerreros:: setArma_2(shared_ptr<Armas> arma){
    ARMAS.second= arma;
}

//metodo de la abstracta 
void Guerreros:: aumentar_vida(int cantidad){
    vida+= cantidad;
    if(vida> 100) vida=100;
    cout<<nombre<<" Aumenta su vida un  "<<cantidad<< " . Vida actual: "<<vida<< endl; 
}

//METODOS DE LA INTERFAZ
pair<shared_ptr<Armas>,shared_ptr<Armas>> Guerreros:: getArmas() const{ //le doy la posibilidad a todos los persoajes de tener dos armas
    return ARMAS;
} 

//getters
string Guerreros:: getNombre(){
    return nombre;
}
int Guerreros:: getSalud(){
    return vida;
}

void Guerreros:: atacar(Personajes& objetivo_de_ataque){
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



void Guerreros::Recibir_daño(){//me saca vida
        ArmaduraEspecial(); //disminutye daño
        cout<<nombre<<" -->  Recibe  "<< daño_obtenido<< " puntos de daño"<<endl;
        if (vida < 0) vida=0;
        curar();
        cout<<nombre<<" tiene  "<< vida<< " puntos de vida restante"<<endl;

}

void Guerreros:: curar(){
    if(vida == 0){ 
        cout<<"el enemigo murio"<<endl;
        cout<<"Curando..."<<endl;
        vida= 100;
    }
}
void Guerreros:: mostrarInfo() {
    if(ARMAS.first){
        cout<<"--> Primer arma que tiene "<<getNombre()<< " es : "<<ARMAS.first->getNombre()<<endl;
    }else{
        cout<<" --> Primer arma que tiene "<<getNombre()<<": NO TIENE PRIMER ARMA"<<endl;
    }
    if(ARMAS.second){
        cout<<"--> Segunda arma que tiene "<<getNombre()<< " es : "<<ARMAS.second->getNombre()<<endl;
    }else{
        cout<<" --> Segunda arma que tiene "<<getNombre()<<": NO TIENE SEGUNDA ARMA"<<endl;
    }
    cout<<"--> Nivel de "<<getNombre()<< " es : "<<nivel<<endl;
    cout<<"--> Vida restante de "<<getNombre()<< " es : "<<getSalud()<<endl;

}
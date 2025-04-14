#include "Batalla.hpp"

int main(){
    srand(time(nullptr));  //comienza el conteo para el rand
    
    //creo j1 y j2;
    shared_ptr<Personajes> jugador1;
    shared_ptr<Personajes> jugador2; //rival

    //vida de los jugadores
    int HP_j1= 100;
    int HP_j2= 100; //puedo hacer personaje1->getvida() q es 100 siempre


    while (HP_j1 > 0 && HP_j2 > 0) {
   
        //jugador 1, elegido por usuario
        int eleccion_personaje;
        cout<<"======= ELIJA SU PERSONAJE ====" << endl;
        cout<<"0- Brujo "<< endl;
        cout<<"1- Conjurador "<< endl;
        cout<<"2- Hechicero "<< endl;
        cout<<"3- Nigromante "<< endl;
        cout<<"4- Barbaro "<< endl;
        cout<<"5- Paladin "<< endl;
        cout<<"6- Caballero "<< endl;
        cout<<"7- Mercenario "<< endl;
        cout<<"8- Gladiador "<< endl;
        cout<<"--> INGRESE Jugador: "<< endl;

        cin >> eleccion_personaje;

        int eleccion_arma;
        cout<<"======= ELIJA UN ARMA ====" << endl;
        cout<<"0- Baston "<< endl;
        cout<<"1- Liibro de Hechizos "<< endl;
        cout<<"2- Pocion "<< endl;
        cout<<"3- Amuleto "<< endl;
        cout<<"4- Espada "<< endl;
        cout<<"5- Garrote "<< endl;
        cout<<"6- Hacha doble "<< endl;
        cout<<"7- Hacha simple "<< endl;
        cout<<"8- Lanza "<< endl;
        cout<<"--> INGRESE arma: "<< endl;
        cin>> eleccion_arma;

        jugador1 = PersonajeFactory:: Creacion_Personaje_Arma(
            static_cast<Tipopersonaje>(eleccion_personaje),
            {PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (eleccion_arma)), nullptr} );

        jugador2 = rival_Aleatorio(); //arma y personaje aleatorio

        //cout de vida de cad uno

        //golpe de jugaror1
        int golpe;
        cout<<"======= ELIJA UN GOLPE ====" << endl;
        cout<<"1- Golpe Fuerte  "<< endl;
        cout<<"2- Golpe Rápido "<< endl;
        cout<<"3- Defensa y Golpe "<< endl;
        cout<<"--> INGRESE GOLPE: "<< endl;
        cin >> golpe;
        
        //guardo los ataques de cada uno
        movimiento ataque_j1= static_cast<movimiento>(golpe);
        movimiento ataque_j2= Ataque_aleatorio();
        
        int daño=10;

        if(ataque_j1== ataque_j2){
            cout<<"Empate. Ambos jugadores golpearon igual. Se pasa a la siguiente ronda. \n";

        }
        else if((ataque_j1== movimiento :: Golpe_fuerte && ataque_j2== movimiento ::Golpe_rapido)||
            (ataque_j1== movimiento:: Golpe_rapido && ataque_j2== movimiento ::Defensa_golpe)||
            (ataque_j1== movimiento:: Defensa_golpe && ataque_j2== movimiento ::Golpe_fuerte)){
           
            HP_j2-= daño; 
            cout<<jugador1->getNombre()<<" Ataca con: "<<jugador1->getArmas().first->getNombre()<<" y hace 10 de daño a: "<< jugador2->getNombre();
             
        }else{
            HP_j1-=daño;
            cout<<jugador2->getNombre()<<" Ataca con: "<<getNombreArma(jugador2)<<" y hace 10 de daño a: "<< jugador1->getNombre();

        }
    
        //muestro vida
        cout<<"============= ESTADO ACTUAL ==========" <<endl;
        cout<< jugador1->getNombre()<< "HP: "<<HP_j1<< endl;
        cout<< jugador2->getNombre()<< "HP: "<<HP_j2<< endl;
}

    //result final 
    if(HP_j1<= 0 && HP_j2 <=0){
        cout<<"Empate. AMBOS MURIERON. \n";
    }else if(HP_j1 <=0){
        cout<<"GANADOR DE LA BATALLA: "<< jugador2->getNombre()<<endl;
        cout<<"La vida de: "<<jugador1->getNombre()<<"llego a su fin, "<< "VIDA: " <<HP_j1<<endl;
    } else{
        cout<<"GANADOR DE LA BATALLA: "<< jugador1->getNombre()<<endl;
        cout<<"La vida de: "<<jugador2->getNombre()<<"llego a su fin, "<< "VIDA: " <<HP_j2<<endl;

    }
}

#include "Batalla.hpp"

int main(){
    srand(time(nullptr));  //comienza el conteo para el rand
    
    //creo j1 y j2;
    shared_ptr<Personajes> jugador1;
    shared_ptr<Personajes> jugador2; //rival

    //vida de los jugadores
    int HP_j1= 100;
    int HP_j2= 100; 

    int contador= 1;

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
        cout<<"--> INGRESE Jugador: ";

        cin >> eleccion_personaje;
        if(eleccion_personaje< 0 || eleccion_personaje> 8 ){
            cout<<"OPCION INVALIDA !. Ingrese nuevo jugador: ";
            cin >> eleccion_personaje;
        }


        int eleccion_arma;
        cout<<"======= ELIJA UN ARMA ====" << endl;
        cout<<"0- Baston "<< endl;
        cout<<"1- Libro de Hechizos "<< endl;
        cout<<"2- Pocion "<< endl;
        cout<<"3- Amuleto "<< endl;
        cout<<"4- Espada "<< endl;
        cout<<"5- Garrote "<< endl;
        cout<<"6- Hacha doble "<< endl;
        cout<<"7- Hacha simple "<< endl;
        cout<<"8- Lanza "<< endl;
        cout<<"--> INGRESE arma: ";
        cin>> eleccion_arma;

        if(eleccion_arma< 0 || eleccion_arma> 8 ){
            cout<<"OPCION INVALIDA !. Ingrese nueva arma: ";
            cin>> eleccion_arma;
        }
        

        jugador1 = PersonajeFactory:: Creacion_Personaje_Arma(
            static_cast<Tipopersonaje>(eleccion_personaje),
            {PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (eleccion_arma)), nullptr} );

        jugador2 = rival_Aleatorio(); //arma y personaje aleatorio



        //golpe de jugaror1
        int golpe;
        cout<<"======= ELIJA UN GOLPE ====" << endl;
        cout<<"1- Golpe Fuerte  "<< endl;
        cout<<"2- Golpe Rápido "<< endl;
        cout<<"3- Defensa y Golpe "<< endl;
        cout<<"--> INGRESE GOLPE: ";
        cin >> golpe;
        if(golpe< 1 || golpe> 3 ){
            cout<<"OPCION INVALIDA !. Ingrese nuevo golpe: ";
            cin>> golpe;
        }
        
    
        //guardo los ataques de cada uno
        movimiento ataque_j1= static_cast<movimiento>(golpe);
        movimiento ataque_j2= Ataque_aleatorio();
        
        
        cout<<"========== COMIENZO DE BATALLA. RONDA N°: "<<contador<<" ============="<<endl;

        int daño= 10; //arma nueva
        //int daño_arma_legendaria_j1= jugador1->getArmas().first->getDaño();
        //int daño_arma_legendaria_j2= jugador2->getArmas().first->getDaño();



        if(ataque_j1== ataque_j2){
            cout<<"Empate. Ambos jugadores golpearon igual. Se pasa a la siguiente ronda. \n";
            continue;
        }

        else if((ataque_j1== movimiento :: Golpe_fuerte && ataque_j2== movimiento ::Golpe_rapido)||
            (ataque_j1== movimiento:: Golpe_rapido && ataque_j2== movimiento ::Defensa_golpe)||
            (ataque_j1== movimiento:: Defensa_golpe && ataque_j2== movimiento ::Golpe_fuerte)){
           
            HP_j2-= daño; 
            cout<<jugador1->getNombre()<<" Ataca con: "<<jugador1->getArmas().first->getNombre()<<" y hace 10 de daño a: "<< jugador2->getNombre()<<endl;
            cout<< "Ganador de la ronda N° "<<contador<<" es: "<< jugador1->getNombre()<<endl;
        }else{
            HP_j1-=daño;
            cout<<jugador2->getNombre()<<" Ataca con: "<<getNombreArma(jugador2)<<" y hace 10 de daño a: "<< jugador1->getNombre()<<endl;
            cout<< "Ganador de la ronda N° "<<contador<<" es : "<< jugador2->getNombre()<<endl;
        }

        contador++;
    
        //muestro vida
        cout<<"\n ============= ESTADO ACTUAL ==========" <<endl;
        cout<< "JUGADOR 1 -->"<< " HP: "<<HP_j1<< endl;
        cout<< "JUGADOR 2 -->"<< " HP: "<<HP_j2<< endl;
}
    //result final 
    cout<<"\n ============= RESULTADO FINAL  ==========" <<endl;

    if(HP_j1<= 0 && HP_j2 <=0){
        cout<<"Empate. AMBOS MURIERON. \n";
    }else if(HP_j1 <=0){
        
        cout<<"La vida del jugador 1 llego a su fin..."<<endl;
        cout<<"--> GANADOR DE LA BATALLA: JUGADOR 2."<<endl;

    } else{
        
        cout<<"La vida del jugador 2 llego a su fin..."<<endl;
        cout<<"--> GANADOR DE LA BATALLA: JUGADOR 1 "<<endl;
    }
}

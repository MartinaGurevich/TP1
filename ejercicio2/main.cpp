#include "Factory.hpp"


int main(){
    srand(time(nullptr)); //cominezo de rand

    vector<shared_ptr<Personajes>> personajes;

    //creo magos
    vector<Tipopersonaje> magos= Magos_aleatorios();
    for (auto Tipo_mago: magos){

        int cant_armas= Armas_aleatorias();

        shared_ptr<Armas> arma1= nullptr;
        shared_ptr<Armas> arma2= nullptr;

        if(cant_armas>=1){
            int indice = rand() % 9;// elige entre todas las armas
            arma1= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }
        if(cant_armas==2){
            int indice = rand() % 9;// elige entre todas las armas
            arma2= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }

        auto personaje= PersonajeFactory:: Creacion_Personaje_Arma(Tipo_mago, {arma1, arma2});
        personajes.push_back(personaje); //me guardo el ersonaje con sus armas
    }
       
    
    //creo GUERREROS
    vector<Tipopersonaje> guerreros= Guerreros_aleatorios();
    for (auto Tipo_guerrero: guerreros){
    
        int cant_armas= Armas_aleatorias();

        shared_ptr<Armas> arma1= nullptr;
        shared_ptr<Armas> arma2= nullptr;

        if(cant_armas>=1){
            int indice = rand() % 9;// elige entre todas las armas
            arma1= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }
        if(cant_armas==2){
            int indice = rand() % 9;// elige entre todas las armas
            arma2= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }

        auto personaje= PersonajeFactory:: Creacion_Personaje_Arma(Tipo_guerrero, {arma1, arma2});
        if(personaje){
            personajes.push_back(personaje); 
        }else{
            cout<<"NULLPTR DE PERSONAJE"<<endl;
        }
    }
    //muestro personajes con arams 
    cout<<"LISTA PERSONAJES--------------\n";
    for (auto& p: personajes){
        if (!p){
           cout<<"personaje nullptr"<< endl;
           continue;
        }
        
        cout<< "Personaje : "<< p-> getNombre()<<endl;
        
        auto armas = p->getArmas(); //accedo a armas del peresonaje

        if (armas.first || armas.second){
            cout<<"--> ARMAS: ";  
            if (armas.first){
                cout<< armas.first->getNombre();
            }
            if (armas.second){
                if (armas.first) cout<<", ";
                cout<< armas.second->getNombre();
            }
            cout<< endl<<"\n";
        } else{
            cout<<"--> "<< p->getNombre()<<" es un personaje sin armas"<< endl<<"\n";
        }
    }   
    
    cout<<"personajes creados: "<< personajes.size()<< endl;
    cout<<"-- guerreros creados: "<< guerreros.size()<< endl;
    cout<<"-- magos creados: "<< magos.size()<< endl;

}
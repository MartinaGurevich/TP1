#include "Factory.hpp"


int main(){
    srand(time(nullptr)); //cominezo de rand

    vector<unique_ptr<Personajes>> personajes;

    //creo magos
    vector<Tipopersonaje> magos= Magos_aleatorios();
    for (auto Tipo_mago: magos){

        int cant_armas= Armas_aleatorias();

        unique_ptr<Armas> arma1= nullptr;
        unique_ptr<Armas> arma2= nullptr;

        if(cant_armas>=1){
            int indice = rand() % 9;// elige entre todas las armas
            arma1= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }
        if(cant_armas==2){
            int indice = rand() % 9;// elige entre todas las armas
            arma2= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }

        auto personaje= PersonajeFactory:: Creacion_Personaje_Arma(Tipo_mago, {std::move(arma1), std::move(arma2)});
        if(personaje){ 
            personajes.push_back(std::move(personaje)); //me guardo personaje con sus armas
        }

    }
       
    
    //creo GUERREROS
    vector<Tipopersonaje> guerreros= Guerreros_aleatorios();
    for (auto Tipo_guerrero: guerreros){
    
        int cant_armas= Armas_aleatorias();

        unique_ptr<Armas> arma1= nullptr;
        unique_ptr<Armas> arma2= nullptr;

        if(cant_armas>=1){
            int indice = rand() % 9;// elige entre todas las armas
            arma1= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }
        if(cant_armas==2){
            int indice = rand() % 9;// elige entre todas las armas
            arma2= PersonajeFactory:: Creacion_Arma(static_cast<tipoArma> (indice)); //catea el arma y le indica que objeto usar
        }

        auto personaje= PersonajeFactory:: Creacion_Personaje_Arma(Tipo_guerrero, {std::move(arma1), std::move(arma2)});
        if(personaje){
            personajes.push_back(std::move(personaje)); 
        }else{
            cout<<"NULLPTR DE PERSONAJE"<<endl; //
        }
    }
    //muestro personajes con arams 
    cout<<"----------- LISTA PERSONAJES --------------\n";
    for (auto& p: personajes){
        if (!p){
           cout<<"personaje nullptr"<< endl;
           continue;
        }
        
        cout<< "Personaje : "<< p-> getNombre()<<endl;
        
        auto& armas = p->getArmas(); //devuelve referencia const al par de armas

        if (armas.first || armas.second){
            cout<<"--> ARMAS: \n";  
            if (armas.first){
                cout<<"Primer arma: "<<armas.first->getNombre()<<endl;
                cout<<"* DAÑO de " <<armas.first->getNombre()<<": "<< armas.first->getDaño()<<"\n";;
                
            }
            if (armas.second){
                if (armas.first) cout<<"\n";
                cout<< "Segunda arma: "<<armas.second->getNombre()<<endl;
                cout<<"* DAÑO de " <<armas.second->getNombre()<<": "<<armas.second->getDaño()<<"\n";;

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
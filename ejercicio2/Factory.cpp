#include "Factory.hpp"
#include <vector>

using namespace std;

shared_ptr<Armas> PersonajeFactory::Creacion_Arma(tipoArma arma){
        switch (arma)
        {
        case tipoArma::baston:
            return make_shared<Baston>("Baston", "Mago", 2022);
        case tipoArma::librodeHechizos:
            return make_shared<LibrodeHechizos>("LibrodeHerchizos", "Mago", 2020);
        case tipoArma::pocion:
            return make_shared<Pocion>("Pocion", "Mago", 2024);
        case tipoArma::amuleto:
            return make_shared<Amuleto>("Amuleto", "Mago", 2020);
        case tipoArma::espada:
            return make_shared<Espada>("Espada", "Guerrero", 2024,10); 
        case tipoArma::garrote:
            return make_shared<Garrote>("Garrote", "Guerrero", 2025,10,20); 
        case tipoArma::hachadoble:
            return make_shared<Hachadoble>("Hachadoble", "Guerrero", 2025,10);
        case tipoArma::hachasimple:
            return make_shared<Hachasimple>("Hachasimple", "Guerrero", 2020,5);
        case tipoArma::lanza:
            return make_shared<Lanza>("Lanza", "Guerrero", 2025,3); //nombre,compatibilidad , modelo y peso
        default:
            cout<<"No se encontro arma.\n";
            return nullptr;
        }
    
} 

shared_ptr<Personajes> PersonajeFactory:: Creacion_Personaje(Tipopersonaje personaje){
    switch (personaje)
    {
    case Tipopersonaje:: brujo:
        return make_shared<Brujo>("Brujo", make_pair(nullptr,nullptr));
    case Tipopersonaje:: conjurador:
        return make_shared<Conjurador>("Conjurador", make_pair(nullptr,nullptr));
    case Tipopersonaje:: hechicero:
        return make_shared<Hechicero>("Hechicero", make_pair(nullptr,nullptr));
    case Tipopersonaje:: nigromante:
        return make_shared<Nigromante>("Nigromante", make_pair(nullptr,nullptr));
    case Tipopersonaje:: barbaro:
        return make_shared<Barbaro>("Barbaro", make_pair(nullptr,nullptr));
    case Tipopersonaje:: paladin:
        return make_shared<Paladin>("Paladin", make_pair(nullptr,nullptr));
    case Tipopersonaje:: caballero:
        return make_shared<Caballero>("Caballero", make_pair(nullptr,nullptr));
    case Tipopersonaje:: mercenario:
        return make_shared<Mercenario>("Mercenario", make_pair(nullptr,nullptr));
    case Tipopersonaje:: gladiador:
        return make_shared<Gladiador>("Gladiador", make_pair(nullptr,nullptr));
    default:
        cout<<"No se pudo encontar personaje ";
        return nullptr;
    }
}
shared_ptr<Personajes> PersonajeFactory::Creacion_Personaje_Arma(Tipopersonaje personaje, pair<shared_ptr<Armas>, shared_ptr<Armas>> armas){
    switch (personaje)
    {
    case Tipopersonaje:: brujo:
        return make_shared<Brujo>("Brujo",armas);
    case Tipopersonaje:: conjurador:
        return make_shared<Conjurador>("Conjurador",armas);
    case Tipopersonaje:: hechicero:
        return make_shared<Hechicero>("Hechicero",armas);
    case Tipopersonaje:: nigromante:
        return make_shared<Nigromante>("Nigromante",armas);
    case Tipopersonaje:: barbaro:
        return make_shared<Barbaro>("Barbaro", armas);
    case Tipopersonaje:: paladin:
        return make_shared<Paladin>("Paladin", armas);
    case Tipopersonaje:: caballero:
        return make_shared<Caballero>("Caballero", armas);
    case Tipopersonaje:: mercenario:
        return make_shared<Mercenario>("Mercenario",armas);
    case Tipopersonaje:: gladiador:
        return make_shared<Gladiador>("Gladiador", armas);
    default:
        cout<<"No se pudo encontar personaje con armas ";
        return nullptr;
    }
}

//funcion para eleccion aleatoria de magos(3 a 7)
vector<Tipopersonaje>  Magos_aleatorios(){ //no quiero repetidos entonces puede tener de 3 a 4 magos , sin repeticion.

    vector<Tipopersonaje> magos_disponibles= {
        Tipopersonaje::brujo,
        Tipopersonaje::conjurador,
        Tipopersonaje::hechicero,
        Tipopersonaje::nigromante
    };

    for(int i=magos_disponibles.size() -1; i>0; i--){
        int j=rand() % (i+1);
        swap(magos_disponibles[i], magos_disponibles[j]);
    }

    //elijo entre 3 y 4 magos sin repetir
    int cantidad_maxima= magos_disponibles.size(); 
    int cantidad_magos= rand() % (cantidad_maxima -2 )+ 3; 
    return vector<Tipopersonaje>(magos_disponibles.begin(), magos_disponibles.begin() + cantidad_magos);
}

//funcion para eleccion aleatoria de guerreros(3 a 7)
vector<Tipopersonaje> Guerreros_aleatorios(){
   
    vector<Tipopersonaje> guerreros_disponibles= {
        Tipopersonaje::barbaro,
        Tipopersonaje::paladin,
        Tipopersonaje::mercenario,
        Tipopersonaje::gladiador
    };

    for(int i=guerreros_disponibles.size() -1; i>0; i--){
        int j=rand() % (i+1);
        swap(guerreros_disponibles[i], guerreros_disponibles[j]);
    }

    //elijo entre 3 y 4 magos sin repetir 
    int cantidad_maxima= guerreros_disponibles.size(); 
    int cantidad_guerreros= rand() % (cantidad_maxima -2 )+ 3; 

    return vector<Tipopersonaje>(guerreros_disponibles.begin(), guerreros_disponibles.begin() + cantidad_guerreros);
}

//funcion para eleccion aleatoria de armas. (0 a 2)
int Armas_aleatorias(){
    return rand() % 3;
}
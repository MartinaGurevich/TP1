#include "Factory.hpp"
#include <vector>

using namespace std;

unique_ptr<Armas> PersonajeFactory::Creacion_Arma(tipoArma arma){
        switch (arma)
        {
        case tipoArma::baston:
            return make_unique<Baston>("Baston", "Mago", 2022);
        case tipoArma::librodeHechizos:
            return make_unique<LibrodeHechizos>("LibrodeHerchizos", "Mago", 2020);
        case tipoArma::pocion:
            return make_unique<Pocion>("Pocion", "Mago", 2024);
        case tipoArma::amuleto:
            return make_unique<Amuleto>("Amuleto", "Mago", 2020);
        case tipoArma::espada:
            return make_unique<Espada>("Espada", "Guerrero", 2024,10); 
        case tipoArma::garrote:
            return make_unique<Garrote>("Garrote", "Guerrero", 2025,10,20); 
        case tipoArma::hachadoble:
            return make_unique<Hachadoble>("Hachadoble", "Guerrero", 2025,10);
        case tipoArma::hachasimple:
            return make_unique<Hachasimple>("Hachasimple", "Guerrero", 2020,5);
        case tipoArma::lanza:
            return make_unique<Lanza>("Lanza", "Guerrero", 2025,3); //nombre,compatibilidad , modelo y peso
        default:
            cout<<"No se encontro arma.\n";
            return nullptr;
        }
    
} 

unique_ptr<Personajes> PersonajeFactory:: Creacion_Personaje(Tipopersonaje personaje){
    pair<unique_ptr<Armas>, unique_ptr<Armas>> armas_null= {nullptr,nullptr};

    switch (personaje)
    {
    case Tipopersonaje:: brujo:
        return make_unique<Brujo>("Brujo", make_pair(nullptr,nullptr));
    case Tipopersonaje:: conjurador:
        return make_unique<Conjurador>("Conjurador", make_pair(nullptr,nullptr));
    case Tipopersonaje:: hechicero:
        return make_unique<Hechicero>("Hechicero", make_pair(nullptr,nullptr));
    case Tipopersonaje:: nigromante:
        return make_unique<Nigromante>("Nigromante", make_pair(nullptr,nullptr));
    case Tipopersonaje:: barbaro:
        return make_unique<Barbaro>("Barbaro", make_pair(nullptr,nullptr));
    case Tipopersonaje:: paladin:
        return make_unique<Paladin>("Paladin", make_pair(nullptr,nullptr));
    case Tipopersonaje:: caballero:
        return make_unique<Caballero>("Caballero", make_pair(nullptr,nullptr));
    case Tipopersonaje:: mercenario:
        return make_unique<Mercenario>("Mercenario", make_pair(nullptr,nullptr));
    case Tipopersonaje:: gladiador:
        return make_unique<Gladiador>("Gladiador", make_pair(nullptr,nullptr));
    default:
        cout<<"No se pudo encontar personaje ";
        return nullptr;
    }
}
unique_ptr<Personajes> PersonajeFactory::Creacion_Personaje_Arma(Tipopersonaje personaje, pair<unique_ptr<Armas>, unique_ptr<Armas>> armas){
    switch (personaje)
    {
    case Tipopersonaje:: brujo:
        return make_unique<Brujo>("Brujo",std::move (armas));
    case Tipopersonaje:: conjurador:
        return make_unique<Conjurador>("Conjurador",std::move (armas));
    case Tipopersonaje:: hechicero:
        return make_unique<Hechicero>("Hechicero",std::move (armas));
    case Tipopersonaje:: nigromante:
        return make_unique<Nigromante>("Nigromante",std::move (armas));
    case Tipopersonaje:: barbaro:
        return make_unique<Barbaro>("Barbaro", std::move (armas));
    case Tipopersonaje:: paladin:
        return make_unique<Paladin>("Paladin", std::move (armas));
    case Tipopersonaje:: caballero:
        return make_unique<Caballero>("Caballero", std::move (armas));
    case Tipopersonaje:: mercenario:
        return make_unique<Mercenario>("Mercenario",std::move (armas));
    case Tipopersonaje:: gladiador:
        return make_unique<Gladiador>("Gladiador", std::move (armas));
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
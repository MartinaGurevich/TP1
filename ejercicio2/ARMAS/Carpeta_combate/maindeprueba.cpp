#include <iostream>
#include "Hachadoble.hpp"
#include "Espada.hpp"
#include "Lanza.hpp"
#include "Garrote.hpp"

using namespace std;
/////////////////////////////////////////////////
// int main() {
//     // Crear un hacha doble con sus parámetros
//     Hachadoble hacha("Destructor", "Guerrero", 101, 15);

//     // Mostrar información inicial
//     cout << "Nombre del arma: " << hacha.getNombre() << endl;
//     cout << "Tipo de arma: " << hacha.getTipodearma() << endl;
//     cout << "Modelo: " << hacha.getModelo() << endl;
//     cout << "Peso: " << hacha.getpeso() << endl;
//     cout << "Daño base: " << hacha.getDaño() << endl;

//     cout << "\n--- Usamos golpe especial ---" << endl;
//     hacha.golpeEspecial();
//     cout << "Daño luego del golpe especial: " << hacha.getDaño() << endl;

//     cout << "\n--- Usamos desafilar varias veces ---" << endl;
//     for (int i = 0; i < 15; ++i) {
//         int filo = hacha.desafilar();
//         cout << "Filo restante tras uso #" << i + 1 << ": " << filo << endl;
//     }

//     cout << "\n--- Intentamos afilar el hacha ---" << endl;
//     int filo = hacha.afilar();
//     cout << "Filo restaurado a: " << filo << endl;

//     return 0;
// }

//////// ESPADA:


// int main() {
//     // Crear una Espada
//     Espada miEspada("Excalibur", "Caballero", 101, 10);

//     // Mostrar datos iniciales
//     cout << "--- DATOS INICIALES DE LA ESPADA ---" << endl;
//     cout << "Nombre: " << miEspada.getNombre() << endl;
//     cout << "Tipo de arma: " << miEspada.getTipodearma() << endl;
//     cout << "Modelo: " << miEspada.getModelo() << endl;
//     cout << "Peso: " << miEspada.getpeso() << endl;
//     cout << "Daño base: " << miEspada.getDaño() << endl;
//     cout << endl;

//     // Usar golpe normal
//     cout << "--- GOLPE NORMAL ---" << endl;
//     miEspada.golpe();
//     cout << endl;

//     // Usar golpe especial
//     cout << "--- GOLPE ESPECIAL ---" << endl;
//     miEspada.golpeEspecial();
//     cout << endl;

//     // Gastar el filo
//     cout << "--- USANDO FILO HASTA AGOTAR ---" << endl;
//     for (int i = 0; i < 22; ++i) {
//         cout << "Golpe #" << i + 1 << ": ";
//         miEspada.golpe();
//     }
//     cout << endl;

//     // Afilar la espada
//     cout << "--- AFILANDO ESPADA ---" << endl;
//     miEspada.afilar();
//     cout << "Filo restaurado, golpeando de nuevo..." << endl;
//     miEspada.golpe();
    
//     return 0;
// }

//////////////LANZAAAA

// int main() {
//     // Crear la lanza
//     Lanza miLanza("Lanza del Alba", "Gurerrero", 301, 12);

//     // Mostrar información inicial
//     cout << "--- DATOS INICIALES DE LA LANZA ---" << endl;
//     cout << "Nombre: " << miLanza.getNombre() << endl;
//     cout << "Tipo de arma: " << miLanza.getTipodearma() << endl;
//     cout << "Modelo: " << miLanza.getModelo() << endl;
//     cout << "Peso: " << miLanza.getpeso() << endl;
//     cout << "Daño base: " << miLanza.getDaño() << endl;
//     cout << endl;

//     // Golpe básico
//     cout << "--- GOLPE BÁSICO ---" << endl;
//     miLanza.daño_basico();
//     cout << endl;

//     // Golpe especial
//     cout << "--- GOLPE ESPECIAL ---" << endl;
//     miLanza.golpeEspecial();
//     cout << endl;

//     // Verificar daño actualizado
//     cout << "--- VERIFICACIÓN DE DAÑO ACTUAL ---" << endl;
//     cout << "Daño actual tras golpe especial: " << miLanza.getDaño() << endl;

//     return 0;
// }


/////////////GARROTEEEE

int main() {
    // Garrote con dureza alta
    Garrote garroteFuerte("Aplastador", "Guerrero", 777, 30, 25);

    garroteFuerte.compatible("Guerrero");
    // Garrote con dureza baja
    Garrote garroteDebil("Garrotín", "Recluta", 778, 20, 10);

    cout << "--- Garrote Fuerte ---" << endl;
    garroteFuerte.golpeEspecial();

    cout << "\n--- Garrote Débil ---" << endl;
    garroteDebil.golpeEspecial();

    return 0;
}

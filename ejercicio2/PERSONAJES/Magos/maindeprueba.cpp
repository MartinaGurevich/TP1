#include "Hechicero.hpp"
#include "../../ARMAS/Carpeta_items/Baston.hpp"
#include "../../ARMAS/Carpeta_combate/Garrote.hpp"

#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Crear armas
    auto baston = make_shared<Baston>("Baston", "Mago", 2202); //no debe mostar leyenda porque es nueva
    auto garrote = make_shared<Garrote>("Garrote", "Guerrero", 777, 30, 25); //utiliza arma con experiencoa

    // Crear personajes Hechiceros
    Hechicero merlin("Merlín", 10, make_pair(baston, garrote));
    Hechicero morgana("Morgana", 9, make_pair(baston, nullptr));

    cout << "\n====== ESTADO INICIAL merlin ======" << endl;
    merlin.mostrarInfo();
    cout << "\n====== ESTADO INICIAL morgana======" << endl;
    morgana.mostrarInfo();

    cout << "\n====== COMBATE ======" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "\n--- Turno " << i + 1 << " ---" << endl;
        merlin.atacar(morgana);
    }

    cout << "\n====== ESTADO FINAL ======" << endl;
    merlin.mostrarInfo();
    morgana.mostrarInfo();

    return 0;
}

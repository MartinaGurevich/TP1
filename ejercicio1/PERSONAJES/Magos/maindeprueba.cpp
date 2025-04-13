// #include "Hechicero.hpp"
// #include "../../ARMAS/Carpeta_items/Amuleto.hpp"
// #include "../../ARMAS/Carpeta_combate/Espada.hpp"

// #include <iostream>
// #include <memory>

// using namespace std;

// int main() {
//     // Crear armas
//     auto espada = make_shared<Espada>("espada", "Mago", 1900, 20); //no debe mostar leyenda porque es nueva
//     auto amuleto = make_shared<Amuleto>("amuleto", "Guerrero", 2030); //utiliza arma con experiencoa

//     // Crear personajes Hechiceros
//     Hechicero merlin("Merlín", make_pair(espada, amuleto));
//     Hechicero morgana("Morgana", make_pair(espada, nullptr));


//     cout << "\n====== ESTADO INICIAL merlin ======" << endl;
//     merlin.mostrarInfo();
//     cout << "\n====== ESTADO INICIAL morgana======" << endl;
//     morgana.mostrarInfo();

//     cout << "\n====== COMBATE ======" << endl;
//     for (int i = 0; i < 2; ++i) {
//         cout << "\n--- Turno " << i + 1 << " ---" << endl;
//         merlin.atacar(morgana);
//         //merlin.lanzoconjuro(morgana);
//     }

//     cout << "\n====== ESTADO FINAL ======" << endl;
//     merlin.mostrarInfo();
//     morgana.mostrarInfo();

//     return 0;
// }

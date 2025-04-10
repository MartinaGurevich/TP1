#include "LibrodeHechizos.hpp"
#include <iostream>
using namespace std;

int main() {
    // Crear el libro
    LibrodeHechizos grimorio("Grimorio de las Sombras",20, "Mago", 1790);

    cout << "\n=== INFO INICIAL ===" << endl;
    cout << "Nombre: " << grimorio.getNombre() << endl;
    cout << "Tipo de arma: " << grimorio.getTipodearma() << endl;
    cout << "Modelo: " << grimorio.getModelo() << endl;
    cout << "Peso: " << grimorio.getpeso() << endl;
    cout << "Daño base: " << grimorio.getDaño() << endl;

    cout << "\n=== COMPATIBILIDAD ===" << endl;
    grimorio.personaje_compatible("Guerrero"); // deberia reducir daño
    grimorio.personaje_compatible("Mago");

    cout << "\n=== CAMBIAR HECHIZO ===" << endl;
    grimorio.cambiarHechizo("Bola de fuego");
    grimorio.cambiarHechizo("Curación");
    grimorio.cambiarHechizo("Hechizo inexistente");

    cout << "\n=== LANZAR HECHIZOS ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "--- Lanzamiento #" << i + 1 << " ---" << endl;
        grimorio.lanzarHechizo();
        grimorio.magia_actual();
        grimorio.durabilidad_libro();
        cout << endl;
    }

    cout << "\n=== PRUEBA DE MAGIA BAJA ===" << endl;
    grimorio.magia_actual();
    grimorio.cambiarHechizo("Explosión oscura");
    for (int i = 0; i < 6; i++) {
        grimorio.lanzarHechizo();
    }

    cout << "\n=== RECARGAR MAGIA ===" << endl;
    grimorio.recargar_magia();
    grimorio.magia_actual();

    cout << "\n=== FORZAR ROTURA Y REPARAR ===" << endl;
    for (int i = 0; i < 10; i++) {
        grimorio.lanzarHechizo();  // para gastar la durabilidad
    }
    grimorio.reparar_libro();
    grimorio.durabilidad_libro();

    return 0;
}

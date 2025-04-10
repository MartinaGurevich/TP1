#include "Pocion.hpp"
#include "Amuleto.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "===== PRUEBA DE POCIÓN =====\n" << endl;
    Pocion veneno("Poción de veneno", 25, "Mago", 2010);

    // Ver compatibilidad
    veneno.personaje_compatible("Guerrero"); // Debería reducir daño

    // Verificar vencimiento (si está vencida reduce efecto)
    veneno.verificarvencimiento();

    // Usar todas las dosis
    for (int i = 0; i < 10; i++) {
        cout << "\n→ Uso #" << i + 1 << endl;
        veneno.aplicarEfectoMagico();
    }

    cout << "\n→ Ver efecto tras recarga automática:" << endl;
    veneno.aplicarEfectoMagico();

    cout << "\n===== PRUEBA DE AMULETO =====\n" << endl;
    Amuleto amuleto("Amuleto de Tierra", 20, "Mago", 2005);

    // Ver compatibilidad
    amuleto.personaje_compatible("Mago");

    // Mostrar daño actual
    amuleto.poderDaño();

    // Usar el amuleto varias veces
    for (int i = 0; i < 6; i++) {
        cout << "\n→ Activación #" << i + 1 << endl;
        amuleto.aplicarEfectoMagico();
    }

    // Ver daño cuando está desactivado
    cout << "\n→ Daño con amuleto desactivado: ";
    amuleto.poderDaño();

    // Recargar y volver a usar
    cout << "\n→ Recargando el amuleto..." << endl;
    amuleto.recargar();
    amuleto.poderDaño();

    cout << "\n→ Usando efecto mágico nuevamente tras recarga:" << endl;
    amuleto.aplicarEfectoMagico();

    return 0;
}

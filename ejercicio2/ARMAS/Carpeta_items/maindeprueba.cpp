#include "Baston.hpp"
#include <iostream>

using namespace std;

int main(){
    Baston Mibaston("Baston Magico", 20,"Mago", 1900);
    

    cout<<"nombre es:"<<Mibaston.getNombre()<<endl;
    cout<<"Tipo de Arma es:"<<Mibaston.getTipodearma()<<endl;
    cout<<"Daño inicial:"<<Mibaston.getDaño()<<endl;

    Mibaston.getModelo();


    //elijo el baston para golpear
    cout<<"---------COMPATIBILIDAD------"<<endl;
    Mibaston.personaje_compatible("Guerrero"); //se reduce


       // Usar el bastón varias veces
    cout << "=== USO DEL BASTÓN (efecto mágico + energía + durabilidad) ===" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "--- Ataque #" << i + 1 << " ---" << endl;
        Mibaston.aplicarEfectoMagico();
        cout<<endl;
    }


    // Forzar rotura y luego reparación
    cout << "=== REPARAR BASTÓN ===" << endl;
    for (int i = 0; i < 10; i++) {  // se rompe después de 25 usos (50 durabilidad inicial / 2)
        Mibaston.aplicarEfectoMagico();
        Mibaston.reparar_baston();
    }
 
    
    cout << endl;

    return 0;
}

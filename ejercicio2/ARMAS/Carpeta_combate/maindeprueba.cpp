#include <iostream>
#include "Hachasimple.hpp"

using namespace std;

int main() {
    // Crear un hacha simple con estado inicial "Nueva"
    Hachasimple miHacha("Rompecráneos", 50, "Guerrero", 2020, 30);

    cout << "\n--- INFORMACIÓN INICIAL DEL HACHA ---" << endl;
    cout << "Filo: " << miHacha.getFilo() << endl;
    cout << "Desgaste: " << miHacha.getDesgaste() << endl;
    cout << "Daño base: " << miHacha.getDaño() << endl;
    

    cout << "\n--- VERIFICANDO COMPATIBILIDAD ---" << endl;
    miHacha.compatible("Mago");  // También podés probar "Mago"
    cout<<" compatibilidad: "<<miHacha.getTipodearma()<<endl;


    cout << "\n--- USANDO EL HACHA 3 VECES ---" << endl;
    for (int i = 0; i < 3; ++i) {
        miHacha.usar();
        cout << "Filo: " << miHacha.getFilo() << ", Desgaste: " << miHacha.getDesgaste() << endl;
    }

    cout << "\n--- GOLPE ESPECIAL ---" << endl;
    miHacha.golpeEspecial();

    
    cout << "\n--- GOLPE ESPECIAL ---" << endl;
    miHacha.golpeEspecial();

    
    cout << "\n--- GOLPE ESPECIAL ---" << endl;
    miHacha.golpeEspecial();

    cout << "\n--- uso normla  ---" << endl;

    for (int i = 0; i < 25; ++i) {
        miHacha.usar();
        cout << "Filo: " << miHacha.getFilo() << ", Desgaste: " << miHacha.getDesgaste() << endl;
    }


    // cout << "\n--- ESTADO DEL HACHA SEGÚN USO ---" << endl;
    // cout << "Estado actual (calculado): " << miHacha.estadoHacha() << endl;

    // cout << "\n--- USO EXCESIVO DEL HACHA HASTA DESAFILAR ---" << endl;
    // for (int i = 0; i < 50; ++i) {
    //     miHacha.usar();
    // }

    cout << "\n--- OTRO GOLPE ESPECIAL TRAS AFILADO AUTOMÁTICO ---" << endl;
    miHacha.golpeEspecial();



    return 0;
}

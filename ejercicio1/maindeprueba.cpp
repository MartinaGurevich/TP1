#include "CentralRegional.hpp"
#include "Empresa.hpp"
#include "Departamento_.hpp"
#include <iostream>
#include <memory>
using namespace std;

int main() {
    // Crear central regional
    CentralRegional central("Central Sur", 500);
    cout << "Nombre de la central: " << central.getNombre() << endl;

    // Agregar países
    cout << central.agregar_pais("Argentina") << endl;
    cout << central.agregar_pais("Chile") << endl;
    cout << central.agregar_pais("Argentina") << endl; // duplicado

    // Crear empresa y departamento
    auto empresa1 = make_unique<Empresa>("TechCorp", "Av. Libertador 123");
    auto departamento1 = make_unique<Departamento_>("RRHH", "Piso 1");

    // Agregar departamento a empresa
    cout << empresa1->agregar_departamento(move(departamento1)) << endl;

    // Agregar empresa a central
    central.agregar_subentidades(move(empresa1));

    // Mostrar empresas
    cout << "\nEmpresas en la central regional:\n";
    for (const auto& nombre : central.getEmpNames()) {
        cout << "- " << nombre << endl;
    }

    // Mostrar cantidad de subentidades
    cout << "\nTotal de subentidades: " << central.contar_subentidades() << endl;

    return 0;
}

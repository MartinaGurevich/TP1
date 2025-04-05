#pragma once
#include <memory>
#include <vector>
#include <string>

using namespace std;

//clase aparte

class Empleado_
{
private:
    string nombre;
    string puesto;
    int antiguedad;
    float salario;
public:
    Empleado_(string nombre, string puesto, int antiguedad, float salario);
    
    int getAntiguedad();
    bool updateSalario(float salario);
    float getSalario;

    ~Empleado_();
};

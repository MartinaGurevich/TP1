//deriva de EMPLEADO
#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "Empleado_.hpp"

using namespace std;

class manager_: public Empleado_
{
private:
    float bono;
    string level;
public:
    manager_(float bono, string nivel);

    bool updateBono(float nuevoBono);
    float getbono();
    bool setLevel(string nuevoNivel);

    ~manager_();
};



#pragma once
#include <string>

using namespace std;


class Armas
{
public:
    virtual int getpeso() = 0;
    virtual string getNombre()  = 0;
    virtual void aumentarDaño() = 0;
    virtual string getModelo() = 0;
    virtual string getTipodearma() = 0;

    virtual ~Armas()= default; 
};


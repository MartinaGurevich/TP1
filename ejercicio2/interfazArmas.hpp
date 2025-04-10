#pragma once
#include <string>
#include <ostream>
#include <istream>

using namespace std;


class Armas
{
public:
    virtual int getpeso() = 0;
    virtual string getNombre()  = 0;
    virtual void aumentarDaño() = 0;
    virtual int getModelo() = 0;
    virtual string getTipodearma() = 0;

    virtual ~Armas()= default; 
};


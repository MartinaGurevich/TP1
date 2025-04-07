#include"Entidad.hpp"

//defino los metodos vituales no puros
EntidadOrganizativa:: EntidadOrganizativa(string nombre): Nombre(nombre){}

string EntidadOrganizativa:: getNombre(){ return Nombre;}

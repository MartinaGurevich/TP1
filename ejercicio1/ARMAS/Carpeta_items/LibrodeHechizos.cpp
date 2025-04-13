#include "LibrodeHechizos.hpp"

LibrodeHechizos:: LibrodeHechizos(string nombre,string compatibilidad, int modelo):
    ItemsMagicos(nombre, "LibrodeHechizos", 20, 5 , modelo),  
    magia(100),
    compatibilidad(compatibilidad),
    hechizoLanzado(""),
    durabilidad(50) //magia del libro
{
    hechizos= { 
        {"Bola de fuego", 25},
        {"Explosion", 30},
        {"Hielo", 15}
    };
}

bool LibrodeHechizos:: personaje_compatible(string compatibilidad){
    if(compatibilidad=="Mago"){
        cout<<"Item compatible para un Mago"<<endl;
        return true;
    }else{
        cout<<"Item NO compatible, daño reducido."<<endl;
        //disminuye el daño en 5 puntos si es un Guerrero.
        int dañoActual= getDaño();
        setDaño(dañoActual - 5);

        cout<<"El Hechizo daña: "<<getDaño()<< " porque usted es Gurerrero."<<endl;

        return false;
    }
}

int LibrodeHechizos:: magia_actual(){
    cout << "Magia actual del libro: "<<magia<<endl;
    return magia;
}

int LibrodeHechizos:: lanzarHechizo(){
    aplicarEfectoMagico();
    return hechizos[hechizoLanzado];
}

void LibrodeHechizos:: cambiarHechizo(string nombre){
    if(hechizos.find(nombre)!= hechizos.end()){
        hechizoLanzado= nombre;
        cout<<"Hechizo seleccinado: "<<hechizoLanzado<< endl;
    }else{
        cout<<"Hechizo no encontrado" << endl;
    }
}

int LibrodeHechizos:: recargar_magia(){
    magia= 100;
    cout<<"Magia recargada"<< endl;
    return magia;
}

int LibrodeHechizos:: durabilidad_libro(){
    cout << "Durabilidad actual del libro: "<<durabilidad<<endl;

    return durabilidad;
}

int LibrodeHechizos:: reparar_libro(){
    if(durabilidad<= 0){
        durabilidad= 50;
        cout<<"Libro reparado."<< endl;
    }
    return durabilidad;
}

void LibrodeHechizos:: aplicarEfectoMagico(){
    //si no tiene magia no puede hacer nada, debe llamar a recrgar
    if(magia<= 0){
        cout<<"El libro no tiene magia. No se puede aplicar efecto magico hasta recargar."<<endl;
        recargar_magia();
        return;
    }
    if (hechizos.find(hechizoLanzado)== hechizos.end()){
        cout<<"no existe este Hechizo."<<endl;
        return; 
    }

    cout<<"El libro aplica el hechizo: "<<hechizoLanzado<<endl;

    int daño= hechizos[hechizoLanzado];
    if (magia<= 10){
        cout<<"Ultimo ezfuerzo! El libro libera un hechizo potenciado. "<< endl;
        daño += 5;
        cout<<"Daño potenciado: "<<daño<<endl;
    }else{
        cout<<"Daño magico aplicado: "<<daño<<endl;
    }  
    
    magia-=10;
    if (magia< 0) magia = 0;

    durabilidad -=5;
    if(durabilidad<= 0){
        durabilidad= 0;
        cout<<"El libro se deterioro completamnete. Hay que repararlo"<<endl;
        reparar_libro();
    }
    cout<< "Magia restante: "<<magia<< "| Durabilidad restante: "<<durabilidad<< endl;
}

  
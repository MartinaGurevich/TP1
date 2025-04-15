CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++14

all:
	$(CXX) $(CXXFLAGS) main3.cpp Batalla.cpp ../ejercicio2/Factory.cpp \
		../ejercicio1/PERSONAJES/Magos/*.cpp \
		../ejercicio1/PERSONAJES/Guerreros/*.cpp \
		../ejercicio1/ARMAS/Carpeta_combate/*.cpp \
		../ejercicio1/ARMAS/Carpeta_items/*.cpp \
		-I. -I../ejercicio2 -I../ejercicio1 -I../ejercicio1/ARMAS -I../ejercicio1/PERSONAJES -o main3

clean:
	rm -f main3

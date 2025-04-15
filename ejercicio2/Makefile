all:
	g++ -Wall -Wextra -std=c++14 \
		main2.cpp Factory.cpp \
		../ejercicio1/PERSONAJES/Magos/*.cpp \
		../ejercicio1/PERSONAJES/Guerreros/*.cpp \
		../ejercicio1/ARMAS/Carpeta_combate/*.cpp \
		../ejercicio1/ARMAS/Carpeta_items/*.cpp \
		-I.. -I../ejercicio1 -I../ejercicio1/PERSONAJES -I../ejercicio1/ARMAS \
		-o main2

clean:
	rm -f main2

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++14

# Archivos fuente
SRC = main.cpp Factory.cpp \
  ../ejercicio1/PERSONAJES/Magos/*.cpp \
  ../ejercicio1/PERSONAJES/Guerreros/*.cpp \
  ../ejercicio1/ARMAS/Carpeta_combate/*.cpp \
  ../ejercicio1/ARMAS/Carpeta_items/*.cpp

# Directorios de includes
INCLUDES = -I.. -I../ejercicio1 -I../ejercicio1/PERSONAJES -I../ejercicio1/ARMAS

# Nombre del ejecutable
OUT = TP1

# Regla principal
all:
	$(CXX) $(CXXFLAGS) $(SRC) $(INCLUDES) -o $(OUT)

# Limpiar
clean:
	rm -f $(OUT)

# Nombre del ejecutable
TARGET = TP3

# Compilador y flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++14

# Archivos fuente
SRCS = main.cpp Batalla.cpp ../ejercicio2/Factory.cpp \
	../ejercicio1/PERSONAJES/Magos/*.cpp \
	../ejercicio1/PERSONAJES/Guerreros/*.cpp \
	../ejercicio1/ARMAS/Carpeta_combate/*.cpp \
	../ejercicio1/ARMAS/Carpeta_items/*.cpp

# Includes
INCLUDES = -I. -I../ejercicio2 -I../ejercicio1 -I../ejercicio1/ARMAS -I../ejercicio1/PERSONAJES

# Regla por defecto
all:
	$(CXX) $(CXXFLAGS) $(SRCS) $(INCLUDES) -o $(TARGET)

# Limpiar ejecutable
clean:
	rm -f $(TARGET)

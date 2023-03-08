#pragma once
#include<string>
#include "Tablero.h"

using namespace std;

class Escenario
{
private:
	string nombre;
	int alto;
	int ancho;
	string imagenFondo;
	int puntaje;
	int mejorPuntaje;
	int nivel;
	Tablero tablero;

public:
	Escenario(){
		nombre = "nombre de escenario predeterminado";
		puntaje = 0;
		alto = 6; 
		ancho = 7; //ancho y alto con valores cualquiera
		imagenFondo = "imagen del fondo del escenario predeterminada";
		mejorPuntaje = 0;
		nivel = 0;
	}

	void incrementarPuntaje(int _puntaje, int _filasEliminadas);
	void actualizarMejorPuntaje(int _mejorPuntaje, int _puntajeActual);
	int incrementarNivel(int _puntaje);



	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setTablero(Tablero _tablero) { tablero = _tablero; }
	Tablero getTablero() { return tablero; }
};

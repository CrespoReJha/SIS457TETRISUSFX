#pragma once
#include"Bloque.h"

class Tablero
{
private:
	int anchoTiles; //definimos el ancho del tablero respecto a la cantidad de tiles que los bloques podran ocupar horintalmente
	int altoTiles; //definimos el ancho del tablero respecto a la cantidad de tiles que los bloques podran ocupar verticalmente
	int numeroFilasEliminadas;
	int posicionVerticalfilaMasAltaOcupada; //fila mas alta tenga un tile ocupado
	vector<bool> filaActual;
	Bloque bloque;

public:
	Tablero() {
		numeroFilasEliminadas = 0;
		anchoTiles = 5; //ponemos un valor cualquiera predeterminado para el ancho del tablero
		altoTiles = 7; //ponemos un valor cualquiera predeterminado el alto del tablero
		posicionVerticalfilaMasAltaOcupada = 0;
		filaActual = { false,false,false,false,false };

	}

	bool filaLlena(vector<bool> _filaActual);
	int eliminarFila(bool _filaLlena);
	void bajarFilas(bool _filaAbajoVacia);
	void incrementarNumeroFilasEliminadas(int _numeroFilasEliminadas);
	int identificarFilaOcupadaMasAlta(vector<bool> _fila);
	bool finJuego(int _posiscionFilaMasAlta, int altoTablero);


	//Metodos accesores

	int getNumeroFilasEliminadas() { return numeroFilasEliminadas; }
};


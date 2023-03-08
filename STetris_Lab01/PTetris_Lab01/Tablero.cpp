#include "Tablero.h"
#include <iostream>
using namespace std;

bool Tablero::filaLlena(vector<bool> _espaciosOcupados)
{
	cout << "funcion que verifique si una fila esta llena" << endl;
	return false;
}

int Tablero::eliminarFila(bool _filaLlena)
{
	cout << "funcion que elimina una fila llena y la pone como vacia" << endl;
	return 0;
}

void Tablero::bajarFilas(bool _filaAbajoVacia)
{
	cout << "funcion que baja la fila y los tiles de la misma en caso de que la fila de abajo este vacia" << endl;
}

void Tablero::incrementarNumeroFilasEliminadas(int _numeroFilasEliminadas)
{
	cout << "funcion que incrementa la cantidad de filas eliminadas en el contador de las mismas" << endl;
}

int Tablero::identificarFilaOcupadaMasAlta(vector<bool> _fila)
{
	cout << "funcion que idecntifica cual es la fila mas alta ocupada por tiles y devuelve su posicion vertical" << endl;
	return 0;
}

bool Tablero::finJuego(int _posiscionFilaMasAlta, int altoTablero)
{
	cout << "funcion que identifica que los tiles que llegaron al limite superior del tablero y finaliza el juego" << endl;
	return false;
}

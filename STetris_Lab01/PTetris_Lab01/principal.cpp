#include <iostream>
#include "Escenario.h"

using namespace std;



int main() {
	cout << "Hola bienvenido al mundo de Tetris." << endl;

	Escenario escenarioInicial;

	cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;
	escenarioInicial.setNombre("Inicia la historia tetris");

	cout << "filas eliminadas: " << escenarioInicial.getTablero().getNumeroFilasEliminadas() << endl;

	cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;

}
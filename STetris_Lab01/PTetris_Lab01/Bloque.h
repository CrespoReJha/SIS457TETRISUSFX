#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Bloque
{
private:
	string nombre;
	int numeroTiles;
	vector<vector<bool>>apariencia;
	int angulo;
	string color;
	float velocidad;
	int posicionX;
	int posicionY;

public:
	void rotar(int _angulo);
	void acelerar(float _velocidad, int _nivelDificultad);
	void moverHorizontalmente(int _direccion);
	void cambiarForma(vector<vector<bool>> _apariencia);

protected:

};


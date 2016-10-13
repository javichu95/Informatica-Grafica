/*
 * Matriz.h
 */
#include <iostream>
#include "Vector.h"

/*
 * Clase Matriz con construcores, destructor y métodos
 * para trabajar con ellas.
 */
class Matriz {
	public:
		Matriz();
		Matriz(Vector[],int);
		~Matriz();

		Matriz mult(Matriz);
		Matriz trasponer();

		int getNumFilas();
		int getNumColumnas();
		Vector getFila(int);

	private:
		int tamFilas;
		int tamColumnas;
		Vector *matriz;
};

/*
 * Sobrecarga de operadores para matriz.
 */
Matriz operator +(Matriz, Matriz);
Matriz operator -(Matriz, Matriz);
Matriz operator *(Matriz, float);
Matriz operator /(Matriz, float);

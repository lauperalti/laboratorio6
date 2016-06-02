// Apartamento.h

#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Propiedad.h"
#include <string>

using namespace std;


class Apartamento : public Propiedad{
	private:
		
		gastosComunes: float;

	public:
	//Constructoras
		Apartamento(void);
		Apartamento(string cod, int cantA, int cantD, int cantB, bool gar, Direccion dir, float supEd, float supT, gastosC float);
		Apartamento(const Apartamento& a);
	//Getters
		float getCastosComunes(void);
	//Setters
		void setGastosComunes(float gastosC);
	//Destructoras
		~Apartamento();
};
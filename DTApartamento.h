// Data Type DTApartamento.h

#ifndef DTAPARTAMENTO_H
#define DTAPARTAMENTO_H

#include "DTPropiedad.h"
#include <string>

using namespace std;


class DTApartamento : public DTPropiedad{
	private:
		
		gastosComunes: float;

	public:
	//Constructoras
		DTApartamento(void);
		DTApartamento(string cod, int cantA, int cantD, int cantB, bool gar, Direccion dir, float supEd, float supT, gastosC float, Inmobibiliaria i, int cantM, bool alq, bool ven);
		DTApartamento(const DTApartamento& dta);
	//Getters
		float getCastosComunes(void);
	//Destructoras
		~DTApartamento();
};
// Data Type DTCasa.h

#ifndef DTCASA_H
#define DTCASA_H

#include "DTPropiedad.h"
#include <string>

using namespace std;


class DTCasa : public DTPropiedad{
	private:
		
		supVerde: float;

	public:
	//Constructoras
		DTCasa(void);
		DTCasa (string cod, int cantA, int cantD, int cantB, bool gar, Direccion dir, float supEd, float supT, supV float, Inmobibiliaria i, int cantM, bool alq, bool ven);
		DTCasa(const Casa& dtc);
	//Getters
		float getSupVerde(void);
	//Destructoras
		~DTCasa();
};
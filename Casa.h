// Casa.h

#ifndef CASA_H
#define CASA_H

#include "Propiedad.h"
#include <string>

using namespace std;


class Casa : public Propiedad{
	private:
		
		supVerde: float;

	public:
	//Constructoras
		Casa(void);
		Casa (string cod, int cantA, int cantD, int cantB, bool gar, Direccion dir, float supEd, float supT, supV float);
		Casa(const Casa& c);
	//Getters
		float getSupVerde(void);
	//Setters
		void setSupVerde(float supV);
	//Destructoras
		~Casa();
};

#endif 
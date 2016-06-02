// Data Type DTDepartamento.h

#ifndef DTDEPARTAMENTO_H
#define DTDEPARTAMENTO_H

#include <string>

using namespace std;

class DTDepartamento{
	private:
		
		nombre, id: string;

	public:
	//Constructoras
		DTDepartamento(void);
		DTDepartamento(string nom, string ide);
		DTDepartamento(const DTDepartamento& dtd);
	//Getters
		string getNombre(void);
		string getId(void);
	//Destructoras
		~DTDepartamento();
};
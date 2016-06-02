// Data Type DTZona.h

#ifndef DTZONA_H
#define DTZONA_H

#include <string>

using namespace std;


class DTZona{
	private:
		
		nombre,codigo: string;

	public:
	//Constructoras
		DTZona(void);
		DTZona(string cod, string nom);
		DTZona(const DTZona& dtz);
	//Getters
		string getNombre(void);
		string getCodigo(void);
	//Destructoras
		~DTZona();
};
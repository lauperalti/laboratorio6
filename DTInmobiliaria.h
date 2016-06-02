// Data Type DTInmobiliaria.h

#ifndef DTINMOBILIARIA_H
#define DTINMOBILIARIA_H

#include <string>

using namespace std;

class DTInmobiliaria{
	private:
		nombre, correo: string;
		Direccion Ubicacion;

	public:
	//Constructoras
		DTInmobiliaria(void);
		DTInmobiliaria(string nom, string cor Direccion dir);
		DTInmobiliaria(const DTInmobiliaria& dti);
	//Getters
		string getNombre(void);
		string getCorreo(void);
		Direccion getUbicacion(void);
	//Destructoras
		~DTInmobiliaria();
};
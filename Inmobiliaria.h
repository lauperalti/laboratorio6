// Inmobiliaria.h

#ifndef INMOBILIARIA_H
#define INMOBILIARIA_H

#include "Usuario.h"
#include <string>

using namespace std;


class Inmobibiliaria : public Usuario{
	private:
		
		Direccion ubicacion;
		Conversacion* conversaciones;

	public:
	//Constructoras
		Inmobiliaria(void);
		Inmobiliaria(string nombre, string correo, string pass, Direccion ubicacion);
		Inmobiliaria(const Inmobiliaria&);
	//Getters
		Direccion getUbicacion(void);
	//Setters
		void setUbicacion(Direccion direccion);
	//Destructoras
		~Inmobiliaria();
};

#endif 
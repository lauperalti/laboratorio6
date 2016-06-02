// Interesado.h

#ifndef INTERESADO_H
#define INTERESADO_H

#include "Usuario.h"
#include <string>

using namespace std;


class Interesado : public Usuario{
	private:
		string edad;
		string nombre;
		string apellido;
		Conversacion* conversaciones;

	public:
	//Constructoras
		Interesado(void);
		Interesado(string nombre, string apellido, string correo, string pass, string edad);
		Interesado(const Interesado&);
	//Getters
		string getNombre(void);
		string getApellido(void);
		string getEdad(void);
		Conversacion* getConversaciones(void);
	//Setters
		void setNombre(string nombre_i);
		void setApellido(string apellido_i);
		void setEdad(string edad_i);

	//	

	//Destructoras
		~Inmobiliaria();
};

#endif 
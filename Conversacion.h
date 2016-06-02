// Conversacion.h

#ifndef CONVERSACION_H
#define CONVERSACION_H

#include "Mensaje.h"

class Conversacion{
	private:
		
		Mensaje* conv;

	public:

	//Constructoras
		Conversacion(void);
		Conversacion(Mensaje* mensajes);
		Conversacion(const Conversacion&);
	//Getters
		Mensaje* getConversacion(void);
		
	//Setters
		void agregarMensaje(Mensaje mensaje);
	//Destructoras
		~Conversacion();
};

#endif 
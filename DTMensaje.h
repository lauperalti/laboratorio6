// Data Type DTMensaje.h

#ifndef DTMENSAJE_H
#define DTMENSAJE_H

#include <string>

using namespace std;


class DTMensaje{
	private:
		hora: Hora;
		fecha: Fecha;
		texto: string;

	public:
	//Constructoras
		DTMensaje(void);
		DTMensaje (Hora h, Fecha f, string t);
		DTMensaje(const DTMensaje& dtm);
	//Getters
		Hora getHora(void);
		Fecha getFecha(void);
		string getTexto(void);
	//Destructoras
		~DTMensaje();
};
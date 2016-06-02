// Mensaje.h

#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>

using namespace std;

class Mensaje{
	private:
		
		Fecha fecha;
		Hora hora;
		string texto;

	public:
	//Constructoras
		Mensaje(void);
		Mensaje(Fecha fecha_m, Hora hora_m, string texto_m);
		Mensaje(const Mensaje&);
	//Getters
		Fecha getFecha(void);
		Hora getHora(void);
		string getTexto(void);
	//Setters
		void setFecha(Fecha f);
		void setHora(Hora h);
		void setTexto(string t);
	//Destructoras
		~Mensaje();
};

#endif 
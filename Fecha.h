//  Data Type Fecha.h

#ifndef FECHA_H
#define FECHA_H

class Fecha
{
	private:
		
		int dia, mes, anio;

	public:

//Constructoras
		Fecha(void);
		Fecha(int dia_f, int mes_f, int anio_f);
		Fecha(const Fecha&);
//Getters
		int getdia(void) const;
		int getmes(void) const;
		int getanio(void) const;
//Destructoras
		~Fecha();
};

 #endif 


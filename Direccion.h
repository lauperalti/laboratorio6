//  Data Type Direccion.h


#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>
#include <iostream>


class Direccion
{
	private:
		
		std::string numero, calle;

	public:

//Constructoras
		Direccion(void);
		Direccion(std::string numero_d, std::string calle_d);
		Direccion(const Direccion&);
//Getters
		std::string getnumero(void) const;
		std::string getcalle(void) const;
//Destructoras
		~Direccion();
};


 #endif 

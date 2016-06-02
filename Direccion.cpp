// Data Type Direccion.cpp

#include "Direccion.h"

#include <stdexcept>



///Constructoras

		Direccion::Direccion()
		{
			
		}

		Direccion::Direccion(std::string numero_d, std::string calle_d)
		{
			numero = numero_d;
			calle = calle_d;
		}

		Direccion::Direccion(const Direccion &d)
		{
			numero = d.numero;
			calle = d.calle;
		}

//Getters

		std::string Direccion::getnumero() const 
		{
			return numero;
		}
		std::string Direccion::getcalle() const 
		{
			return calle;
		}

//Destructoras
		Direccion::~Direccion()
		{
		}


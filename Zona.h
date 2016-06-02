// Zona.h

#ifndef ZONA_H
#define ZONA_H

#include <string>

using namespace std;


class Zona{
	private:
		
		nombre,codigo: string;

	public:
	//Constructoras
		Zona(void);
		Zona(string cod, string nom);
		Zona(const Zona& z);
	//Getters
		string getNombre(void);
		string getCodigo(void);
	//Destructoras
		~Zona();
};
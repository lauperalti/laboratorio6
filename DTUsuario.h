// Data type DTUsuario.h

#ifndef DTUSUARIO_H
#define DTUSUARIO_H

#include <string>

using namespace std;


class DTUsuario {
	private:
		correo,nombre: string;
		esAdmin: bool;
		cantIng: int;

	public:
	//Constructoras
		DTUsuario(void);
		DTUsuario(string cor,string nom, bool esA, int cantI);
		DTUsuario(const DTUsuario& dtu);
	//Getters
		string getNombre(void);
		string getCorreo(void);
		bool getEsAdmin(void);
		int getCantIng(void);
	//Destructoras
		~DTUsuario();
};
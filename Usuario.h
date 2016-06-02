// Usuario.h

#ifndef USUARIO_H
#define USUARIO_H
#include <string>

using namespace std;


class Usuario{
	
	private:
		nombre, correo, pass: string;

	public:
	//Constructoras
		Usuario(void);
		Usuario(string nombre, string correo, string pass);
		Empresa(const Usuario&);
	//Getters
		string getNombre(void);
		string getCorreo(void);
		DTUsuario getDTUsuario();
	//Setters
		void setNombre(string nombre);
		void setCorreo(string correo);
		void setPass(string pass);
	//Destructora
		virtual ~Usuario();
};
 
#endif 
// Propiedad.h

#ifndef PROPIEDAD_H
#define PROPIEDAD_H
#include <string>

using namespace std;


class Propiedad{
	
	private:
		codigo: string;
		cantAmbientes,cantDorm,cantBanios: int;
		garage:bool;
		direccion: Direccion;
		supEdificada,supTotal: float;

	public:
	//Constructoras
		Propiedad(void);
		Propiedad(string cod, int cantA, int cantD, int cantB, bool gar, Direccion dir, float supEd, float supT);
		Propiedad(const Propiedad& p);
	//Getters
		string getCodigo(void);
		int getCantAmb(void);
		int getCantDor(void);
		int getCantBan(void);
		bool getGarage(void);
		Direccion getDireccion(void);
		float getSupEdificada(void);
		float getSupTotal(void);
		
		bool getAlquiler(void);
		bool getVenta(void);
		DTInmobiliaria getInmobiliaria(void);
		int getCantMensajes(void);
		DTMensaje getMensaje(void);
		void DestruirDatos(void);
		int obtenerCantidadPorZyD(void);
	
	//Setters
		void setCodigo(string cod);
		void setCantAmb(int cantA);
		void setCantDor(int cantD);
		void setCantBan(int cantB);
		void setGarage(bool gar);
		void setDireccion(Direccion dir);
		void setSupEdificada(float supE);
		void setSupTotal(float supT);
	//Destructora
		virtual ~Propiedad();
};
 
#endif 
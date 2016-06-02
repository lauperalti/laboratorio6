// Data Type DTPropiedad.h

#ifndef DTPROPIEDAD_H
#define DTPROPIEDAD_H
#include <string>

using namespace std;


class DTPropiedad{
	
	private:
		codigo: string;
		cantAmbientes,cantDorm,cantBanios: int;
		garage:bool;
		direccion: Direccion;
		supEdificada,supTotal: float;
		inmobiliaria: Inmobiliaria;
		cantMensajes: int;
		alquiler: bool;
		venta: bool;

	public:
	//Constructoras
		DTPropiedad(void);
		DTPropiedad(string cod, int cantA, int cantD, int cantB, bool gar, Direccion dir, float supEd, float supT, Inmobiliaria i, int cantM, bool alq, bool vent);
		DTPropiedad(const DTPropiedad& dtp);
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
		DTInmobiliaria getInmobiliaria(void);  // DTInm?
		int getCantMensajes(void);
		DTMensaje getMensaje(void);


	//Destructora
		void DestruirDatos(void);
		virtual ~DTPropiedad();
};
 
#endif 
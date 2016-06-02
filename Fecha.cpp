// Data Type Fecha.cpp

#include "Fecha.h"
#include <iostream>
#include <stdexcept>
using namespace std;

//Constructoras
Fecha::Fecha()
{
	dia = 01;
	mes = 01;
	anio = 1900;
}
Fecha::Fecha(int dia_f, int mes_f, int anio_f)
{
 	dia = dia_f;
    mes = mes_f;
	anio = anio_f;
}
Fecha::Fecha(const Fecha &f)
{
	dia = f.dia;
	mes = f.mes;
	anio = f.anio;
}

//Getters
int Fecha::getdia() const
{
  return dia;
}
int Fecha::getmes() const
{
  return mes;
}
int Fecha::getanio() const
{
  return anio;
}

//Destructoras
Fecha::~Fecha()
{
}
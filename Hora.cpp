// Data Type Hora.cpp

#include "Hora.h"
#include <iostream>
#include <stdexcept>
using namespace std;

//Constructoras
Hora::Hora()
{
	hora = 00;
	min = 00;
	seg = 00;
}
Hora::Hora(int hora_h, int min_h, int seg_h)
{
 	hora = hora_h;
    min = min_h;
	seg = seg_h;
}
Hora::Hora(const Hora &h)
{
	hora = h.hora;
	min = h.min;
	seg = h.seg;
}

//Getters
int Hora::getHora() const
{
  return hora;
}
int Hora::getMin() const
{
  return min;
}
int Hora::getSeg() const
{
  return seg;
}

//Destructoras
Hora::~Hora()
{
}
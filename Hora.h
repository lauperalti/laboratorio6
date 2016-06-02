// Data type Hora.h

#ifndef HORA_H
#define HORA_H

class Hora{
	private:
		
		int hora, min, seg;

	public:

//Constructoras
		Hora(void);
		Hora(int hora_h, int min_h, int seg_h);
		Hora(const Hora&);
//Getters
		int getHora(void) const;
		int getMin(void) const;
		int getSeg(void) const;
//Destructoras
		~Hora();
};

 #endif 
#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef EMPLEADO_H
#define EMPLEADO_H
#include"Persona.h"
#include"Fecha.h"

class Empleado:public Persona
{
		private:

		char turno[50];
		float sueldo;
		Fecha FechadeNacimiento;

	public:


        ///sets

        void setTurno(const char *cadena);
		void setSueldo(const float);
		void setFechadeNacimiento(Fecha);

        ///gets

        const char* getTurno();
		const float getSueldo();
		Fecha getFechadeNacimiento();

		//constructor para fecha
		Empleado(){};
		Empleado(int,int,int);
};
#endif // EMPLEADO_H

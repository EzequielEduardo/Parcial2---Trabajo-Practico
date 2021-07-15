#include<iostream>
#include<clocale>
#include<cstdlib>
#include <cstdio>
#include<cstring>
#include "Empleado.h"


        ///sets

        void Empleado::setTurno(const char *cadena){strcpy(turno,cadena); }
        void Empleado::setSueldo(float s){sueldo=s;}
		void Empleado::setFechadeNacimiento(Fecha x){FechadeNacimiento=x;}

        ///gets

		const char* Empleado::getTurno(){return turno;}
		const float Empleado::getSueldo(){return sueldo;}
		Fecha Empleado::getFechadeNacimiento(){return FechadeNacimiento;};

		//const
		Empleado::Empleado(int d,int m,int a){FechadeNacimiento.setFecha(d,m,a);}


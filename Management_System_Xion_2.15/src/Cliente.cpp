#include<iostream>
#include<clocale>
#include<cstdlib>
#include <cstdio>
#include<cstring>
using namespace std;
#include "Cliente.h"
#include"Persona.h"



       ///sets


        void Cliente::setCondicionFiscal(const char *cadena){strcpy(condicionFiscal,cadena);  }
		void Cliente::setCondicionDeCobro(const char *cadena){strcpy(condicionDeCobro,cadena);  }
		void Cliente::setFechadeIncorporacion(Fecha x ){FechadeIncorporacion=x;  }

        ///gets

		const char* Cliente::getCondicionFiscal(){return condicionFiscal;}
		const char* Cliente::getCondicionDeCobro(){return condicionDeCobro;}
		Fecha Cliente::getFechadeIncorporacion(){return FechadeIncorporacion;}

		//const
			Cliente::Cliente(int d,int m,int a){FechadeIncorporacion.setFecha(d,m,a);}

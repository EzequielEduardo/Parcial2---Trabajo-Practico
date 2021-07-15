#include<iostream>
#include<clocale>
#include<cstdlib>
#include <cstdio>
#include<cstring>
using namespace std;
#include "Proveedor.h"


        ///sets


        void Proveedor::setCondicionFiscal(const char *cadena){strcpy(condicionFiscal,cadena); }
        void Proveedor::setCondicionDePago(const char *cadena){strcpy(condicionDePago,cadena); }
		void Proveedor::setFechadeIncorporacion(Fecha x ){FechadeIncorporacion=x;  }

        ///gets

		const char* Proveedor::getCondicionFiscal(){return condicionFiscal;}
		const char* Proveedor::getCondicionDePago(){return condicionDePago;}
		Fecha Proveedor::getFechadeIncorporacion(){return FechadeIncorporacion;}

				//const
		Proveedor::Proveedor(int d,int m,int a){FechadeIncorporacion.setFecha(d,m,a);}

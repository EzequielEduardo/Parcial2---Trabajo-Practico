#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include"Proveedor.h"
#include"Persona.h"
#include"Fecha.h"

class Proveedor:public Persona
{
		private:

		char condicionFiscal[50];
		char condicionDePago[50];
		Fecha FechadeIncorporacion;

	public:

		///sets
        void setCondicionFiscal(const char *cadena);
		void setCondicionDePago(const char *cadena);
		void setFechadeIncorporacion(Fecha );
        ///gets

        const char* getCondicionFiscal();
		const char* getCondicionDePago();
		Fecha getFechadeIncorporacion();

		//constructor para fecha
		Proveedor(){};
		Proveedor(int,int,int);
};


#endif // PROVEEDOR_H

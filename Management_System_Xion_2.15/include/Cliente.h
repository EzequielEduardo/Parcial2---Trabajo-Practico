#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"
#include"Fecha.h"
class Cliente:public Persona
{
		private:

		char condicionFiscal[50];
		char condicionDeCobro[50];
		Fecha FechadeIncorporacion;


	public:

        ///sets

        void setCondicionFiscal(const char*);
        void setCondicionDeCobro(const char*);
        void setFechadeIncorporacion(Fecha );

        ///gets
		//void gettersPersona();
        const char* getCondicionFiscal();
		const char* getCondicionDeCobro();
		Fecha getFechadeIncorporacion();

		//constructor para fecha
		Cliente(){};
		Cliente(int,int,int);

};

#endif // CLIENTEOK_H

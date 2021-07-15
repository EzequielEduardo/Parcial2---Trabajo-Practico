#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTENEGOCIO_H
#define CLIENTENEGOCIO_H
#include "Cliente.h"

class  ClienteNegocio
{
	private:

	public:

	bool guardarDatos(Cliente);
	Cliente* Cargar_Vector_de_Clientes();
	int CantidadDeClientes();

	void cargarCadena(char *pal, int tam);
};



#endif // CLIENTENEGOCIO_H

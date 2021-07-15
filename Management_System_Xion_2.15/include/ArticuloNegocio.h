#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef ARTICULONEGOCIO_H
#define ARTICULONEGOCIO_H
#include"ArticuloNegocio.h"
#include"Articulo.h"
#include "Transaxinventario.h"
class ArticuloNegocio
{
	public:
	bool guardarDatos(Articulo);
	Articulo* Cargar_Vector_de_Articulos();
	int CantidadDeArticulos();
	void cargarCadena(char *pal, int tam);
	 void completarDatosDeTransaccion(TransaxInventario&);

};

#endif // ARTICULONEGOCIO_H

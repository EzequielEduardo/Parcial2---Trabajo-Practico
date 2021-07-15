#ifndef COMPRANEGOCIO_H
#define COMPRANEGOCIO_H
#include "Transaxinventario.h"
#include "Articulo.h"
class CompraNegocio
{
    private:

	public:

	bool guardarDatos(CompraNegocio);
	void cargarCadena(char *pal, int tam);

	TransaxInventario* Cargar_Vector_de_Compras();
	int CantidadDeCompras();
};

#endif // COMPRANEGOCIO_H

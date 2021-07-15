#ifndef TRANSAXINVENTARIONEGOCIO_H
#define TRANSAXINVENTARIONEGOCIO_H
#include "Transaxinventario.h"

class TransaxinventarioNegocio
{
    public:
	void actualizarstock(bool,TransaxInventario&);
	int CantidadDeTransax();
	void cargarCadena(char *pal, int tam);
	TransaxInventario* Cargar_Vector_de_Stocks();
    float getStock();

	//para compras
	TransaxInventario* Cargar_Vector_de_Compras();
	int CantidadDeCompras();
	bool guardarDatosCompra(TransaxInventario);

	//para ventas
	TransaxInventario* Cargar_Vector_de_Ventas();
	int CantidadDeVentas();
	bool guardarDatosVenta(TransaxInventario);

};

#endif // TRANSAXINVENTARIONEGOCIO_H

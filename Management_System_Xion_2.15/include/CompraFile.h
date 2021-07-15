#ifndef COMPRAFILE_H
#define COMPRAFILE_H
#include"TransaxInventario.h"
#include"CompraNegocio.h"
class CompraFile
{
    private:

	public:

	bool grabarEnDisco(CompraNegocio);
	TransaxInventario* obtener_Datos_Compras();
	int  cantidadDeDatosGrabados();

};

#endif // COMPRAFILE_H

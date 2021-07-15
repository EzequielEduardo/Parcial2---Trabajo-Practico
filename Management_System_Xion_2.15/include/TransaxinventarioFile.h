#ifndef TRANSAXINVENTARIOFILE_H
#define TRANSAXINVENTARIOFILE_H
#include "Transaxinventario.h"

class TransaxinventarioFile
{
    public:
    	//metodos para stock
        bool grabarDatosInventario(TransaxInventario);
        TransaxInventario* obtener_Datos_Inventario();
		int cantidadDeTransaxGrabadas();
        int getStock();

        //metodos para compras
		TransaxInventario* obtener_Datos_Compras();
		bool grabarDatosCompraEnDisco(TransaxInventario);
		int cantidadDeDatosComprasGrabadas();

        //metodos para ventas
		TransaxInventario* obtener_Datos_Ventas();
		bool grabarDatosVentasEnDisco(TransaxInventario);
		int cantidadDeDatosVentasGrabadas();


};


#endif // TRANSAXINVENTARIOFILE_H

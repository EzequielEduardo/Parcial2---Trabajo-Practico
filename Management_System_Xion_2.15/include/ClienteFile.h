#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEFILE_H
#define CLIENTEFILE_H
#include "ClienteNegocio.h"

class ClienteFile
{

	public:

		bool grabarEnDisco(Cliente );
        Cliente* obtener_Datos_Clientes();
        int  cantidadDeDatosGrabados();

};


#endif // CLIENTEFILE_H

#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include "Proveedor.h"
#include "ProveedorFile.h"
#include "ProveedorNegocio.h"
#include "ProveedorVista.h"

using namespace std;

bool ProveedorNegocio::guardarDatos(Proveedor supplier)
{

    ProveedorFile archivo;
    return archivo.grabarEnDisco(supplier);

}

Proveedor* ProveedorNegocio::Cargar_Vector_de_Proveedores()
{
    Proveedor *vectorProveedor;
    ProveedorFile archivo;
    vectorProveedor=archivo.obtener_Datos_de_Proveedor();

return vectorProveedor;

}

int ProveedorNegocio::CantidadDeSupplier()
{

    ProveedorFile archivo;

    return archivo.cantidadDeDatosGrabados();

}

		void ProveedorNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}

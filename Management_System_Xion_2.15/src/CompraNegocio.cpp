#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include "TransaxinventarioNegocio.h"
#include "TransaxinventarioFile.h"
#include "Transaxinventario.h"
#include "CompraNegocio.h"
#include "CompraFile.h"
using namespace std;

bool CompraNegocio::guardarDatos(CompraNegocio articulo)
{
    CompraFile archivo;
    return archivo.grabarEnDisco(articulo);
}

TransaxInventario* CompraNegocio::Cargar_Vector_de_Compras()
{
    TransaxInventario *vectorCompras;
    CompraFile archivo;
    vectorCompras=archivo.obtener_Datos_Compras();

return vectorCompras;
}


int CompraNegocio::CantidadDeCompras()
{

    CompraFile archivo;

    return archivo.cantidadDeDatosGrabados();

}

void CompraNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}

#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include "Articulo.h"
#include "ArticuloFile.h"
#include "ArticuloNegocio.h"
#include "ArticuloVista.h"
#include "Transaxinventario.h"
using namespace std;


bool ArticuloNegocio::guardarDatos(Articulo articulo)
{
    ArticuloFile archivo;
    return archivo.grabarEnDisco(articulo);
}


Articulo* ArticuloNegocio::Cargar_Vector_de_Articulos()
{
    Articulo *vectorArticulos;
    ArticuloFile archivo;
    vectorArticulos=archivo.obtener_Datos_Articulos();

return vectorArticulos;
}


int ArticuloNegocio::CantidadDeArticulos()
{

    ArticuloFile archivo;

    return archivo.cantidadDeDatosGrabados();

}


void ArticuloNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}

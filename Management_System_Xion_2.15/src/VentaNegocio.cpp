#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

#include "Articulo.h"
#include "VentaNegocio.h"
#include "VentaFile.h"
#include"Transaxinventario.h"
using namespace std;

bool VentaNegocio::guardarDatos(TransaxInventario articulo)
{
    VentaFile archivo;
    return archivo.grabarEnDisco(articulo);
}



void VentaNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}

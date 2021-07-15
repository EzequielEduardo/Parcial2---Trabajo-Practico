#include<iostream>
#include<clocale>
#include<cstdlib>

#include "CompraFile.h"
#include "TransaxInventario.h"
#include "TransaxinventarioFile.h"
#include "CompraNegocio.h"

using namespace std;

  bool CompraFile::grabarEnDisco(CompraNegocio articulo){

        FILE *p;
        p=fopen("Compras.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&articulo, sizeof (Articulo), 1, p);
        fclose(p);
        return escribio;
    }

TransaxInventario* CompraFile::obtener_Datos_Compras(){

        int pos=0,cant=cantidadDeDatosGrabados();
        TransaxInventario* vectorCompras= new TransaxInventario[cant];
        if(vectorCompras==NULL) return 0;

        FILE *p;
        p=fopen("Compras.dat","rb");
        if(p==NULL) return 0;

        for(pos;pos<cant;pos++){

        fseek(p, pos*sizeof (TransaxInventario), 0);
        fread(&vectorCompras[pos], sizeof (TransaxInventario), 1, p);

        }

        fclose(p);
        return vectorCompras;
    }

    int CompraFile::cantidadDeDatosGrabados(){

        TransaxInventario compra;
        int cantidad=0;

        FILE *p;
        p=fopen("Compras.dat","rb");
        if(p==NULL) return false;

        while(fread(&compra, sizeof (TransaxInventario), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }

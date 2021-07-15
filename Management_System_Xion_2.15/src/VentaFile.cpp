#include<iostream>
#include<clocale>
#include<cstdlib>

#include "VentaFile.h"
#include "Articulo.h"
#include "VentaNegocio.h"

using namespace std;

  bool VentaFile::grabarEnDisco(TransaxInventario articulo){

        FILE *p;
        p=fopen("Ventas.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&articulo, sizeof (TransaxInventario), 1, p);
        fclose(p);
        return escribio;
    }


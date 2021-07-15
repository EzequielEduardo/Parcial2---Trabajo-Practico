#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ProveedorNegocio.h"
#include "ProveedorFile.h"
#include "Proveedor.h"

using namespace std;

    bool ProveedorFile::grabarEnDisco(Proveedor Proveedor){

        FILE *p;
        p=fopen("Proveedor.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Proveedor, sizeof (Proveedor), 1, p);
        fclose(p);
        return escribio;
    }


Proveedor* ProveedorFile::obtener_Datos_de_Proveedor(){

        int pos=0,cant=cantidadDeDatosGrabados();
        Proveedor* vectorProveedor= new Proveedor[cant];
        if(vectorProveedor==NULL) return 0;

        FILE *p;
        p=fopen("Proveedor.dat","rb");
        if(p==NULL) return 0;

        for(pos;pos<cant;pos++){

        fseek(p, pos*sizeof (Proveedor), 0);
        fread(&vectorProveedor[pos], sizeof (Proveedor), 1, p);

        }
        fclose(p);
        return  vectorProveedor;
    }

    int ProveedorFile::cantidadDeDatosGrabados(){

        Proveedor Proveedor;
        int cantidad=0;

        FILE *p;
        p=fopen("Proveedor.dat","rb");
        if(p==NULL) return false;

        while(fread(&Proveedor, sizeof (Proveedor), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }

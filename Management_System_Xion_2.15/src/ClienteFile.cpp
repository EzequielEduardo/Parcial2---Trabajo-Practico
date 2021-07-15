#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "Cliente.h"

using namespace std;

    bool ClienteFile::grabarEnDisco(Cliente cliente){

        FILE *p;
        p=fopen("Cliente.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&cliente, sizeof (Cliente), 1, p);
        fclose(p);
        return escribio;
    }


Cliente* ClienteFile::obtener_Datos_Clientes(){

        int pos=0,cant=cantidadDeDatosGrabados();
        Cliente* vectorClientes= new Cliente[cant];
        if(vectorClientes==NULL) return 0;

        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return 0;

        for(pos;pos<cant;pos++){

        fseek(p, pos*sizeof (Cliente), 0);
        fread(&vectorClientes[pos], sizeof (Cliente), 1, p);

        }

        fclose(p);
        return vectorClientes;
    }

    int ClienteFile::cantidadDeDatosGrabados(){

        Cliente cliente;
        int cantidad=0;

        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;

        while(fread(&cliente, sizeof (Cliente), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }


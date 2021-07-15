#include<clocale>
#include<cstdlib>
#include "EmpleadoNegocio.h"
#include "EmpleadoFile.h"
#include "Empleado.h"

using namespace std;

    bool EmpleadoFile::grabarEnDisco(Empleado Empleado){

        FILE *p;
        p=fopen("Empleado.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Empleado, sizeof (Empleado), 1, p);
        fclose(p);
        return escribio;
    }


Empleado* EmpleadoFile::obtener_Datos_de_Empleados(){

       int pos=0,cant=cantidadDeDatosGrabados();
        Empleado* vectorEmpleado= new Empleado[cant];
        if(vectorEmpleado==NULL) return 0;

        FILE *p;
        p=fopen("Empleado.dat","rb");
        if(p==NULL) return 0;

        for(pos;pos<cant;pos++){

        fseek(p, pos*sizeof (Empleado), 0);
        fread(&vectorEmpleado[pos], sizeof (Empleado), 1, p);

        }
        fclose(p);
        return  vectorEmpleado;
    }

    int EmpleadoFile::cantidadDeDatosGrabados(){

        Empleado Empleado;
        int cantidad=0;

        FILE *p;
        p=fopen("Empleado.dat","rb");
        if(p==NULL) return false;

        while(fread(&Empleado, sizeof (Empleado), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }

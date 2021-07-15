#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

using namespace std;

#include "Articulo.h"
#include "ArticuloVista.h"
#include "ArticuloNegocio.h"



void ArticuloVista::menuArticulos()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MAESTRO DE ARTICULOS"<<endl<<endl;
        cout<<"1-CARGAR ARTICULOS"<<endl;
        cout<<"2-LISTAR ARTICULOS"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarArticulos()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 2:
            mostrarArticulos();
            system("pause");
            system("cls");
            break;

        case 0:

		break;

        default:
            break;

        }

    }
    while(opc!=0);


}


bool ArticuloVista::cargarArticulos()
{
    ArticuloNegocio negocio;
    Articulo datos;
    char cadena[50];
    int numero,entero;
    float decimal;

	cout << "Datos del Articulo:"<<endl;
    cout<<"Ingresar: "<<endl;

    cout<<"ID_Articulo: ";
        negocio.cargarCadena(cadena,20);
        datos.setID_Articulo(cadena);

    cout<<"Precio Unitario de lista: ";
    cin>>decimal;
        datos.setprecioUnitario(decimal);

    return negocio.guardarDatos(datos);

}

void ArticuloVista::mostrarArticulos()
{
    ArticuloNegocio negocio;
    Articulo *vectorArticulos;

    vectorArticulos=negocio.Cargar_Vector_de_Articulos();///get_clientes

        for(int x;x<negocio.CantidadDeArticulos();x++){
        cout<< "ID_Articulo: "<<vectorArticulos[x].getID_Articulo() <<endl;
        cout<< "Precio Unitario de lista: "<<vectorArticulos[x].getprecioUnitario() <<endl;


        cout<< "-------------------------"<<endl;}

    delete vectorArticulos;
}



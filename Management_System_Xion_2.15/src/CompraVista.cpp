#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

#include "ArticuloNegocio.h"
#include "Transaxinventario.h"
#include "TransaxinventarioNegocio.h"
#include "CompraNegocio.h"
#include "CompraVista.h"

using namespace std;

void CompraVista::menuCompras()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU COMPRAS"<<endl<<endl;
        cout<<"1-CARGAR COMPRAS"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarCompras()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

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


bool CompraVista::cargarCompras()
{
    TransaxinventarioNegocio negocio;
    ArticuloNegocio obj;
    char cadena[20];
    int entero,dia,mes,anio;
    float decimal;

    cout<<"Datos de la fecha actual: "<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;

    TransaxInventario compra(dia,mes,anio);

    cout<<"--------------------------------------"<<endl;

    cout << "Datos de la Compra:"<<endl;
    cout<<"Ingresar: "<<endl;

    cout<<"ID_Articulo: ";
        negocio.cargarCadena(cadena,20);
        compra.setTRID_Articulo(cadena);

    cout<<"Cantidad:";
        cin>>entero;
        compra.setTRCantidad(entero);

    cout<<"Costo Unitario: ";
		cin>>decimal;
        compra.setTRprecioUnitario(decimal);

    negocio.actualizarstock(1,compra); //  llamo al metodo de la clase TransaxinventarioNegocio que va a modificar el stock y stockValorizado
    return negocio.guardarDatosCompra(compra);
}

bool CompraVista::mostrarCompras(){

	TransaxinventarioNegocio negocio;
    TransaxInventario *vectorCompras;

    vectorCompras=negocio.Cargar_Vector_de_Compras();///get_compras

		 cout<< "LISTADO DE COMPRAS REALIZADAS"<<endl;
        for(int x;x<negocio.CantidadDeCompras();x++){
        cout<< "ID_Articulo: "<<vectorCompras[x].getTRID_Articulo() <<endl;
		cout<< "Fecha de compra: ";vectorCompras[x].getFechaTransax().MostrarFecha();
        cout<< "Cantidad: "<<vectorCompras[x].getTRCantidad() <<endl;
        cout<< "Costo Unitario: "<<vectorCompras[x].getTRprecioUnitario() <<endl;
        cout<< "-------------------------"<<endl;}

    delete vectorCompras;

}

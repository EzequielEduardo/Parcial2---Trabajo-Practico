#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

#include "ArticuloNegocio.h"
#include "TransaxinventarioNegocio.h"
#include "Transaxinventario.h"
#include "VentaNegocio.h"
#include "VentaVista.h"

using namespace std;

void VentaVista::menuVentas()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU VENTAS"<<endl<<endl;
        cout<<"1-CARGAR VENTAS"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarVentas()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
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


bool VentaVista::cargarVentas()
{
    ArticuloNegocio obj;
    TransaxinventarioNegocio negocio;
    char cadena[20];
    int entero,dia,mes,anio;;
    float decimal;

    cout<<"Datos de la fecha actual: "<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;

    TransaxInventario venta(dia,mes,anio);

    cout<<"--------------------------------------"<<endl;

    cout << "Datos de la Venta:"<<endl;
    cout<<"Ingresar: "<<endl;

    cout<<"ID_Articulo: ";
    negocio.cargarCadena(cadena,20);
    venta.setTRID_Articulo(cadena);

    cout<<"Cantidad:";
    cin>>entero;
    venta.setTRCantidad(entero);

    cout<<"Precio Unitario: ";
    cin>>decimal;
    venta.setTRprecioUnitario(decimal);

    negocio.actualizarstock(0,venta);

    return negocio.guardarDatosVenta(venta);
}

bool VentaVista::mostrarVentas(){

	TransaxinventarioNegocio negocio;
    TransaxInventario *vectorVentas;

    vectorVentas=negocio.Cargar_Vector_de_Ventas();///get_compras
		cout<< "LISTADO DE VENTAS REALIZADAS"<<endl;
        for(int x;x<negocio.CantidadDeVentas();x++){
        cout<< "ID_Articulo: "<<vectorVentas[x].getTRID_Articulo() <<endl;
		cout<< "Fecha de compra: ";vectorVentas[x].getFechaTransax().MostrarFecha();
        cout<< "Cantidad: "<<vectorVentas[x].getTRCantidad() <<endl;
        cout<< "Precio Unitario: "<<vectorVentas[x].getTRprecioUnitario() <<endl;
        cout<< "-------------------------"<<endl;}

    delete vectorVentas;

}

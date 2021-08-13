#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include "TransaxinventarioVista.h"
#include "TransaxinventarioNegocio.h"
#include "Transaxinventario.h"

void TransaxinventarioVista::MostrarInventario(){

	TransaxinventarioNegocio negocio;
    TransaxInventario *vectorStock;

    vectorStock=negocio.Cargar_Vector_de_Stocks();

        for(int x=0;x<negocio.CantidadDeTransax();x++){
        cout<< "ID_Articulo: "<<vectorStock[x].getTRID_Articulo() <<endl;
		cout<< "fecha de Stock: ";vectorStock[x].getFechaTransax().MostrarFecha();
        cout<< "Tipo de Transaccion: "<<vectorStock[x].getTipoTransax() <<endl;
        cout<< "Cantidad: "<<vectorStock[x].getTRCantidad() <<endl;
        cout<< "Precio Unitario: "<<vectorStock[x].getTRprecioUnitario() <<endl;
        cout<< "STOCK: "<<vectorStock[x].getStock() <<endl;
        cout<< "StockValorizado: "<<vectorStock[x].getStockValorizado() <<endl;
        cout<< "-------------------------"<<endl;}

    delete vectorStock;
}

void MostrarInventario_ventas(){

    int ID,mes,anio;
    TransaxinventarioNegocio negocio;
    TransaxInventario *vectorStock;

    cout<<"Indique Articulo: ";
    cin>>ID;
    cout<<endl;
    cout<<"Indique mes: "<<endl;
    cin>>mes;
    cout<<endl;
    cout<<"Indique Anio: "<<endl;
    cin>>anio;
    cout<<endl;

}

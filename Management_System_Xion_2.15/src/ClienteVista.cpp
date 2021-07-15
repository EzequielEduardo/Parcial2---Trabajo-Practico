#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

using namespace std;

#include "Cliente.h"
#include "ClienteVista.h"
#include "ClienteNegocio.h"


void ClienteVista::menuClientes()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MAESTRO DE CLIENTES"<<endl<<endl;
        cout<<"1-CARGAR CLIENTES"<<endl;
        cout<<"2-LISTAR CLIENTES"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarCliente()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 2:
            mostrarClientes();
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


bool ClienteVista::cargarCliente()
{
    ClienteNegocio negocio;
    char cadena[50];
    int numero, dia, mes, anio;

    cout << "Datos del Cliente:" << endl;
    cout<<"Ingresar: "<<endl;

	cout<<"Fecha de nacimiento: ";

    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;

	Cliente datos (dia,mes,anio);
	//datos.setFechadeIncorporacion(dia);

    cout<< "Nombre: ";

	negocio.cargarCadena(cadena,50);
	datos.setNombre(cadena);

    cout<< "Apellido: ";
	negocio.cargarCadena(cadena,50);
	datos.setApellido(cadena);

    cout<< "CUIL: ";
    cin>>numero;
    datos.setCuil(numero);

    cout<< "Domicilio: ";

	negocio.cargarCadena(cadena,50);
	datos.setDomicilio(cadena);

    cout<< "Localidad: ";
	negocio.cargarCadena(cadena,50);
	datos.setLocalidad(cadena);

    cout<< "Telefono: ";
    cin>>numero;
    datos.setTelefono(numero);

    cout<< "E-mail: ";
	negocio.cargarCadena(cadena,50);
	datos.setEmail(cadena);

	cout<<"Condicion Fiscal: ";
	negocio.cargarCadena(cadena,50);
	datos.setCondicionFiscal(cadena);


	cout<<"Condicion de Cobro: ";
	negocio.cargarCadena(cadena,50);
	datos.setCondicionDeCobro(cadena);

	cout<<"Fecha de Incorporacion: ";


    return negocio.guardarDatos(datos);

}

void ClienteVista::mostrarClientes()
{
    ClienteNegocio negocio;
    Cliente *vectorClientes;

    vectorClientes=negocio.Cargar_Vector_de_Clientes();///get_clientes

        for(int x;x<negocio.CantidadDeClientes();x++){
		cout<< "Fecha de Incorporacion: ";vectorClientes[x].getFechadeIncorporacion().MostrarFecha();
		cout<< "Anio de Incorporacion: "<<vectorClientes[x].getFechadeIncorporacion().getAnio() <<endl;
        cout<< "Mes de Incorporacion: "<<vectorClientes[x].getFechadeIncorporacion().getMes() <<endl;
		cout<< "Dia de Incorporacion: "<<vectorClientes[x].getFechadeIncorporacion().getDia() <<endl;
        cout<< "Nombre: "<<vectorClientes[x].getNombre() <<endl;
        cout<< "Apellido: "<<vectorClientes[x].getApellido() <<endl;
        cout<< "CUIL: "<<vectorClientes[x].getCuil() <<endl;
        cout<< "Domicilio: "<<vectorClientes[x].getDomicilio() <<endl;
        cout<< "Localidad: "<<vectorClientes[x].getLocalidad() <<endl;
        cout<< "Telefono: "<<vectorClientes[x].getTelefono() <<endl;
        cout<< "E-mail: "<<vectorClientes[x].getEmail() <<endl;
        cout<<"Condicion Fiscal: "<<vectorClientes[x].getCondicionFiscal() <<endl;
		cout<<"Condicion de Cobro: "<<vectorClientes[x].getCondicionDeCobro() <<endl;
		//cout<<"Fecha de Incorporacion: "<<vectorClientes[x].getFechadeIncorporacion() <<endl;
        cout<< "-------------------------"<<endl;}

    delete vectorClientes;
}


#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

using namespace std;
#include"Proveedor.h"
#include"ProveedorVista.h"
#include"ProveedorNegocio.h"

void ProveedorVista::menuProveedores()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MAESTRO DE PROVEEDORES"<<endl<<endl;
        cout<<"1-CARGAR PROVEEDOR"<<endl;
        cout<<"2-LISTAR PROVEEDOR"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarProveedores()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 2:
            mostrarProveedores();
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


bool ProveedorVista::cargarProveedores()
{
	ProveedorNegocio negocio;

    char cadena[50];
    int numero,dia,mes,anio;

    cout << "Datos del Proveedor:" << endl;

	cout<<"Fecha de Incorporacion: ";
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;

	Proveedor datos (dia,mes,anio);

    cout<<"Ingresar: "<<endl;
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

	cout<<"Condicion de Pago: ";
	negocio.cargarCadena(cadena,50);
	datos.setCondicionDePago(cadena);

	cout<<"Fecha de Incorporacion: ";
	//datos.setFechadeIncorporacion(numero);


    return negocio.guardarDatos(datos);
}

void ProveedorVista::mostrarProveedores()
{

    ProveedorNegocio negocio;
    Proveedor *vectorProveedores;
    vectorProveedores= negocio.Cargar_Vector_de_Proveedores();

    for(int x=0; x < negocio.CantidadDeSupplier(); x++)
    {
		cout<< "Anio de Incorporacion: "<<vectorProveedores[x].getFechadeIncorporacion().getAnio() <<endl;
        cout<< "Mes de Incorporacion: "<<vectorProveedores[x].getFechadeIncorporacion().getMes() <<endl;
		cout<< "Dia de Incorporacion: "<<vectorProveedores[x].getFechadeIncorporacion().getDia() <<endl;
        cout<< "Nombre: "<<vectorProveedores[x].getNombre() <<endl;
        cout<< "Apellido: "<<vectorProveedores[x].getApellido() <<endl;
        cout<< "CUIL: "<<vectorProveedores[x].getCuil() <<endl;
        cout<< "Domicilio: "<<vectorProveedores[x].getDomicilio() <<endl;
        cout<< "Localidad: "<<vectorProveedores[x].getLocalidad() <<endl;
        cout<< "Telefono: "<<vectorProveedores[x].getTelefono() <<endl;
        cout<< "E-mail: "<<vectorProveedores[x].getEmail() <<endl;
        cout<<"Condicion Fiscal: "<<vectorProveedores[x].getCondicionFiscal() <<endl;
		cout<<"Condicion de Cobro: "<<vectorProveedores[x].getCondicionDePago() <<endl;
        cout<< "-------------------------"<<endl;
    }

    delete vectorProveedores;
}


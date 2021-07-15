#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef PROVEEDORFILE_H
#define PROVEEDORFILE_H


class ProveedorFile
{
	private:
		//FILE *pfile;

	public:

		bool grabarEnDisco(Proveedor );
        Proveedor* obtener_Datos_de_Proveedor();
        int  cantidadDeDatosGrabados();

};


#endif // PROVEEDORFILE_H

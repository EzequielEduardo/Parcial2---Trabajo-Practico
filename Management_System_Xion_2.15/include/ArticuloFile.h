#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef ARTICULOFILE_H
#define ARTICULOFILE_H


class ArticuloFile
{
	public:
		bool grabarEnDisco(Articulo );
        Articulo* obtener_Datos_Articulos();
        int  cantidadDeDatosGrabados();

		float getPrecioArticulo(const char * IdArticulo);
        bool leerArticulo(Articulo &,int pos);


	private:
};

#endif // ARTICULOFILE_H

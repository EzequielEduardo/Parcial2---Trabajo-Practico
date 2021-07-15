#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef ARTICULO_H
#define ARTICULO_H


class Articulo
{
   private:
        char id_Articulo[20];
        float precioUnitario;

    public:
        void setID_Articulo(const char* );
        void setprecioUnitario(float);

        const char*  getID_Articulo();
        float getprecioUnitario();
        void menuArticulos();

};

#endif // ARTICULO_H

#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include "Transaxinventario.h"

		void TransaxInventario::setTRID_Articulo(const char* cadena){strcpy(trid_Articulo,cadena);}
        void TransaxInventario::setTRCantidad(int n){trcantidad=n;}
        void TransaxInventario::setTRprecioUnitario(float n){trprecioUnitario=n;}
		void TransaxInventario::setFechaTransax(Fecha xx){fechaTransax=xx;}
		void TransaxInventario::setStock(int n){stock=n;}
        void TransaxInventario::setStockValorizado(float n){stockValorizado=n;}
        void TransaxInventario::setPrecioArt(float n){precioDeArt=n;}



        void TransaxInventario::setTipoTransax(bool n){
            const char* venta[7]={ "venta\0"};
           const char* compra[7]={"compra\0"};
                 if(n==0)strcpy(tipoTransax,"venta\0");
            if(n==1)strcpy(tipoTransax,"compra\0");
            }

//const char *archivo = "produccion.dat";


        TransaxInventario::TransaxInventario(int d,int m,int a){
            fechaTransax.setFecha(d,m,a);
            stock=stockValorizado=precioDeArt=0;
            }

        const char*  TransaxInventario::getTRID_Articulo(){return trid_Articulo;}
        int          TransaxInventario::getTRCantidad(){return trcantidad;}
        float        TransaxInventario::getTRprecioUnitario(){return trprecioUnitario;}
		Fecha        TransaxInventario::getFechaTransax(){return fechaTransax;}
		int          TransaxInventario::getStock(){return stock;}
        float        TransaxInventario::getStockValorizado(){return stockValorizado;}
        float        TransaxInventario::getPrecioArt(){return precioDeArt;}

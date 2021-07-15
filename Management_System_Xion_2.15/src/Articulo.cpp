#include"Articulo.h"
#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
using namespace std;
		//sets
        void Articulo::setID_Articulo(const char* cadena){strcpy(id_Articulo,cadena);}
        void Articulo::setprecioUnitario(float n){precioUnitario=n;}

		//gets
        const char*  Articulo::getID_Articulo(){return id_Articulo;}
        float        Articulo::getprecioUnitario(){return precioUnitario;}






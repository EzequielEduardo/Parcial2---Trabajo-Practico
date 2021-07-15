#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string.h>
#include<ctime>
using namespace std;
///////////////CLASE FECHA
//Puede utilizarse para fechas desde el 01/01/1900

class Fecha
{
  private:
    int dia;
    int mes;
    int anio;


  public:
    Fecha(int d=0,int m=0,int a=0);

    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAnio(){return anio;}

    void setFecha(int d=0,int m=0,int a=0);
    void setDia(int d){dia=d;}
    void setMes(int m){mes=m;};
    void setAnio(int a){anio=a;}

	void MostrarFecha();
    void MostrarFechaTexto();
    int NumeroSerie();
	bool esbisiesto(int);
    void NumeroSerieaFecha(int);

	//sobrecarga de Operadores
    bool operator >(Fecha &);
    bool operator ==(Fecha &);
    Fecha operator+(int);
    int operator -(Fecha &);
    void operator +=(int);
    friend istream & operator>>(istream &, Fecha &);
    friend ostream & operator<<(ostream &, Fecha &);

};

#endif // FECHA_H

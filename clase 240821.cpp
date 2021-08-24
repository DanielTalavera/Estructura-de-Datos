#include "vector.h"
#include <iostream>

using namespace std;

vector::vector(void)
{
}


vector::~vector(void)
{
}

void vector::cargarVector(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"Ingrese v["<<i<<"]= ";
		cin>> vec[i];
	}
}

void vector::mostrarVector(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"v["<<i<<"]= ";
		cout<<vec[i]<< endl;
	}
}

int vector::sumarVector(int vec[],int n)
{
	int suma=0;
	for (int i=0;i<n;i++)
	{
		suma=suma + vec[i];
	}
	return suma;
}

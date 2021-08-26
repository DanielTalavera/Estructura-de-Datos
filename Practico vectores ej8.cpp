//vec.cpp
#include "vec.h"
#include <iostream>

using namespace std;

vec::vec(void)
{
}


vec::~vec(void)
{
}

void vec::cargarVector(int vect[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese v["<<i<<"]= ";
		cin>> vect[i];
	}
}

int vec::mostrardif(int vect[],int n){
	float x, res=0, may, men;
	int c=0;
	for (int i=0;i<n;i++)
	{
		if(vect[i]>vect[i-c]){
			may=vect[i];
			men=vect[i-c];
		}
		if(vect[i]<vect[i-c]){
			may=vect[i-c];
			men=vect[1];
		}
		if(vect[i]==vect[i-c]){
			may=vect[i];
			men=vect[i-c];
		}
		x= may - men;
		if(res<x){
		res=x;
		}
		if(i<1)
		c++;
	}
	return res;
}

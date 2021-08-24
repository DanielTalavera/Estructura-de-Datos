#ifndef VECTOR_H
#define VECTOR_H
#pragma once
#define MAX 100

class vector
{
	private:
		int vec[MAX];
		int tam;
	public:
		vector(void);
		~vector(void);
		void cargarVector(int vec[],int n);
		void mostrarVector(int vec[],int n);
		int sumarVector(int vec[],int n);
	protected:
};

#endif

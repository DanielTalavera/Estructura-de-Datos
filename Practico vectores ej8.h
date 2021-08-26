#ifndef VEC_H
#define VEC_H
#pragma once
#define MAX 100

class vec
{
	private:
		int vect[MAX];
		int tam;
	public:
		vec(void);
		~vec(void);
		void cargarVector(int vect[],int n);
		int mostrardif(int vect[],int n);
	protected:
};

#endif

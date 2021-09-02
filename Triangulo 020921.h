#pragma once
ref class Triangulo
{
private:
	float base;
	float altura;
	float area;
public:
	Triangulo(void);
	~Triangulo(void);
	void set_base(float b);
	float get_base();
	void set_altura(float h);
	float get_altura();
	//float calculararea(float b, float h);
	float calcularArea();
};

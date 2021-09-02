#include "StdAfx.h"
#include "Triangulo.h"


Triangulo::Triangulo(void)
{
}
Triangulo::~Triangulo(void){}

void Triangulo::set_base(float b){
	base=b;
}
float Triangulo::get_base(){
	return base;
}
void Triangulo::set_altura(float h){
	altura=h;
}
float Triangulo::get_altura(){
	return altura;
}
//float Triangulo::calculararea(float b, float h){
//	area=(b*h)/2;
//	return area;
//}
float Triangulo::calcularArea(){
	area=(base*altura)/2;
	return area;
}

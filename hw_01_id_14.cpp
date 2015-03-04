//Autor:Oscar GArcia Avila
//Date: 2/22/2015
//Version:01
//Homework 01 implement three variables and print the average
//en esta tarea se declararan tres tipos diferentes de variables y se calculara el promedio 
#include<iostream>//biblioteca
int main(){
	int x=2;//declaramos un tipo de variable
	float y=3.9;//declaramos otro tipo de variable con decimales
	double z=6.9;//declaramos otro tipo de variable doble
	double p=(x+y+z)/3;//hacemos la operacion en una variable doble para calcular el promedio
	std::cout<<"el promedio de los tres diferentes valores es:\n"<<p<<std::endl;//imprimimos el promedio
	return 0;//valor de retorno
	
}

//Autor:Oscar GArcia Avila
//Date: 2/22/2015
//Version:01
//Homework 01 implement three variables and print the average
//en esta tarea se declararan tres tipos diferentes de variables y se calculara el promedio 
#include<iostream>//biblioteca
int main(){
	int r=2,s=4,t=6 ;//declaramos un tipo de variable
	float x=3.9,y=4.3,z=2.3;//declaramos otro tipo de variable con decimales
	double o=6.9,p=32,q=56;//declaramos otro tipo de variable doble
	double a=(r+s+t)/3;//hacemos la operacion en una variable doble para calcular el promedio
    double b=(x+y+z)/3;
    double c=(o+p+q)/3;
    std::cout<<"los numero enteros son: "<<r<< " , " <<s <<" , " <<t<<" , " <<std::endl;
    std::cout<<"los numero float son: "<<x<<" , " << y<< " , " <<z<<" , "<<std::endl;
    std::cout<<"los numero double son: "<<o<<" , " << p<< " , " <<q<<" , "<<std::endl;
	std::cout<<"el promedio de los tres valores enteros es:\n"<<a<<std::endl;//imprimimos el promedio de cada tipo de dato
    std::cout<<"el promedio de los tres valores float es:\n"<<b<<std::endl;
	std::cout<<"el promedio de los tres valores double es:\n"<<c<<std::endl;
	return 0;//valor de retorno
	
}

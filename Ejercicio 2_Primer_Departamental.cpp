#include <iostream>

int sumar (int num1, int num2){
	return num1+num2;
}

int main (){
	int a,b,resultado;
	std::cout<<"Ingresa el primer numero:"<<std::endl;
	std::cin>>a;
	std::cout<<"Ingresa el segundo numero:"<<std::endl; 
	std::cin>>b;
	resultado=sumar(a,b);
	std::cout<<"La suma de"<<a<< "y"<< b<<"es"<< resultado<<std::endl; 
	return 0;  
}

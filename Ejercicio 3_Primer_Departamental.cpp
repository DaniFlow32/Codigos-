#include <iostream>
using namespace std; 

int main(){
double num1,num2; 
double suma,resta,multiplicacion,division;
cout<<"Ingrese un numero"<<endl; 
cin>>num1;
cout<<"Ingrese un segundo numero"<<endl; 
cin>>num2; 
suma=num1+num2;
resta=num1-num2; 
multiplicacion=num1*num2; 
if(num2!=0){
	division=num1/num2; 
} else{
	cout<<"No se puede dividir entre 0"<<endl; 
}
std::cout<<"La suma es "<<suma<<std::endl; 
std::cout<<"La resta es"<<resta<<std::endl; 
std::cout<<"La multiplicacion es"<<multiplicacion<<std::endl;
if(num2!=0){
	cout<<num1/num2;
}else{	 
	cout<<"La division es"<<division<<std::endl; 
}

return 0; 
} 

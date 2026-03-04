#include <iostream>
#include <string>
class Saludo{
	private:
		std::string mensaje; 
		
		public:
			Saludo(): mensaje("Hola Mundo"){}
			
			void saludar (){
				std::cout<<mensaje<<std::endl;
			}
			
};

int main(){
	Saludo Saludomiequipo; 
	
	Saludomiequipo.saludar();
	
	return 0; 
}
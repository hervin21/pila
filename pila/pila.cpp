#include <iostream>
#include <vector>
#include <string>

int main()
{
	const int capacidad = 10;
	std::vector <int>elementos(capacidad);
	int cima = -1;
	std::cout << "teclea elementos de la pila(termina con -1)\n";
	int x = 0;
	const int CLAVE = -1;

	while (x != CLAVE);{
		std::string entrada;
		std::cin >> entrada;
		try {
			x = std::stoi(entrada);
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;
			}

			else {
				std::cout << "piila llena\n";
				
			}
			
		}
		catch (const std::invalid_argument&) {
			std::cout << "Entrada no valida \n";

		}
		
	}
	if (cima >= 0) {
		std::cout << "elemnetos de la pila \n";
			while (cima >= 0) {
				x = elementos[cima];
				cima--;
				std::cout << x << "";
			}
	}
	else {
		std::cout << "Pila vacia\n";
	}

	return 0;


}
#include <iostream>

int main (){
	std::cout << "Este programa recebe associa a resistência elétrica de uma dada quantidade de resistores em paralelo. Use '.' para determinar as casas decimais. Casas decimais devem sempre ser adicionadas para que o programa efetue o cálculo corretamente" << std::endl;

	std::cout << std::endl << "Quantidade de resistores a serem associados:" << std::endl;

	int q;
	std::cin >> q;
	if (!q){
		std::cout << "valor inválido" << std::endl;
	}else{
		double req;
		for(int i{0}; i != q; i++){
			double res; 
			std::cout << "insira o valor do resistor " << i << std::endl;
			std::cin >> res;
			res = 1/res;
			req += res;
		}
		req = 1/req;

		std::cout << "req= " << req << std::endl;
	}
	return 0;
}	

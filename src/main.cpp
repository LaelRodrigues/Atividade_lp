/**
 *	@file	main.cpp
 *	@brief	Arquivo de teste que simula a corrida corrida de sapos
 *	@author	Lael Rodrigues (laelrodrigues7@gmail.com)
 *	@since	22/08/2017
 *	@date	22/08/2017
 */ 



#include "sapo.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl; 

int Sapo::disTotalPercorrida = 0;

/** @brief	Funcao principal */
int main() {
	
	int numSapos, disTotal;
	cout << "--------------------Corrida de sapos-------------------" << endl;
	cout << "Digite o numero de sapos que participaram da corrida: ";
	cin >> numSapos;
	cout << "Digite a distancia total da corrida: ";
	cin >> disTotal;

	Sapo::disTotalPercorrida = disTotal;

	Sapo *sapos = new Sapo[numSapos];
	for(int j = 0; j < numSapos; j++) {
		sapos[j].setId(j+1);	
	}

	int i = 1;
	int vencedor;
	while(i) {
		for(int j = 0; j < numSapos; j++) {
			sapos[j].pular();
		}
		for(int j = 0; j < numSapos; j++) {
			if(sapos[j].getDisPercorrida() > Sapo::disTotalPercorrida) {
				vencedor = j;
				i = 0;
				break;
			}
		}
	}
	cout << endl;
	cout << "O vencedor foi o sapo " << sapos[vencedor].getId() << endl; 
	cout << "Numero de pulos dado = " << sapos[vencedor].getQuantPulos() << endl;
	cout << "A distancia percorrida = " << sapos[vencedor].getDisPercorrida() << endl;
}
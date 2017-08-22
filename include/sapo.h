/**
 *	@file	sapo.h
 *	@brief	Arquivo cabecalho com a definicao da classe Sapo
 *					para representar um sapo
 *	@author	Lael Rodrigues (laelrodrigues7@gmail.com)
 *	@since	20/08/2017]
 *	@date	20/08/2017
 */ 


#ifndef SAPO_H
#define SAPO_H

#include <random>
using std::random_device;

/**
 *	@class 	Sapo sapo.h
 *	@brief 	Classe que representa um sapo
 *	@detais	Os atributos da classe sao: identificador,
 *		 		distancia percorrida e quantidade de pulos
 */	

class Sapo {
	private:
		int id;							/** Identificador do sapo */
		int disPercorrida;				/** Distancia percorrida pelo sapo */
		int quantPulos;					/** Quantidade de pulos dada pelo sapo */
		random_device semente;				/** Instancia o gerador de numeros */
	public:

		static int disTotalPercorrida;		/** Distancia total percorrida */
		
		Sapo();						/** Construtor padrao */
		Sapo(int i);				/** Construtor parametrizado */

		/** @brief Retorna o identificador do sapo */
		int getId();	

		/** @brief Altera o identificador do sapo */
		void setId(int i);

		/** @brief Retorna a distancia percorrida pelo sapo */
		int getDisPercorrida();

		/** @brief Altera a distancia percorrida pelo sapo */
		void setDisPercorrida(int dp);

		/** @brief Retorna a quantidade de pulos dada pelo sapo */
		int getQuantPulos();

		/** @brief Altera a quantidade de pulos dada pelo sapo */
		void setQuantPulos(int qp);

		/** @brief Funcao que incrementa de forma randomica a distancia
		 *			percorrida pelo sapo e incrementa o numero de pulos em 1
		 */
		void pular();
};

#endif
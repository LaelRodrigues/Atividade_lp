/**
 * @file	sapo.cpp
 * @brief	Arquivo corpo com a implementacao dos metodos definidos 
 *					na classe Sapo
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	08/22/2017
 * @date	08/22/2017
 */


#include "sapo.h"

#define DISTANCIAMAX 10

#include <random>
using std::default_random_engine;
using std::uniform_int_distribution;

/**
 * @details Os valores do identificar, distancia percorrida e
 *				quantidade de pulos sao iniciados com o valor 0
 */
Sapo::Sapo() {
	id = 0;
	disPercorrida = 0;
	quantPulos = 0;
}

/**
 * @details O valor do identificar e passado por paramentro, enquanto
 *				distancia  percorrida e quantidade de pulos sao iniciados 
 *				com o valor 0
 */
Sapo::Sapo(int i) {
	id = i;
	disPercorrida = 0;
	quantPulos = 0;
}

/** @return	Identificador do sapo */
int Sapo::getId() {
	return id;
}

/** @param i Identificador do sapo */
void Sapo::setId(int i) {
	id = i;
}

/** @return	Distancia percorrida pelo sapo */
int Sapo::getDisPercorrida() {
	return disPercorrida;
}

/** @param dp Distancia percorrida pelo sapo */
void Sapo::setDisPercorrida(int dp) {
	disPercorrida = dp;
}

/** @return	Quantidade de pulos dado pelo sapo */
int Sapo::getQuantPulos() {
	return quantPulos;
}

/** @param qp Quantidade de pulos dado pelo sapo */
void Sapo::setQuantPulos(int qp) {
	quantPulos = qp;
}
/** @details	gera e incrementa um valor randomico ao atribulo distPercorrida
 *						e incrementa em uma unidade a variavel quantPulos
 */
void Sapo::pular() {
	default_random_engine gerador(semente());			/** Gerador dos valores randomicos */
	uniform_int_distribution <> dist(1, DISTANCIAMAX); 	/** Distribuidor de valores inteiros */
	disPercorrida += dist(gerador);
	quantPulos++;

}
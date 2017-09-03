#ifndef _CALCULONEURONIO_H_
#define _CALCULONEURONIO_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#include "definicoes.h"

//* Funcao que recebe dois doubles e retorna a adicao da algebra minmax*//
double adicao (double a, double b);

//* Funcao que recebe dois doubles e retorna a adicao dual da algebra minmax*//
double adicaoDual (double a, double b);

/*Funcao que recebe dois doubles e retorna o ínfimo da morfologia matematica*/
double infimo(double a, double b);

/*Funcao que recebe dois doubles e retorna o supremo da morfologia matematica*/
double supremo(double a, double b);

/*Funcao responsavel por fazer o valor do peso ser repetido para ter o
tamanho do vetor de entrada*/
void geraVetorPeso (double valorPeso, double vetorPeso[tamanhoVetor]);

/*Funcao responsavel por realizar a dilacao da entrada pelo vetor de pesos*/
double dilatacaoUnitaria (double vetorPeso[tamanhoVetor], double entrada[tamanhoVetor]);

/*Funcao responsavel por realizar a erosao do vetor de entrada pelo vetor peso*/
double erosaoUnitaria(double vetorPeso[tamanhoVetor], double entrada[tamanhoVetor]);

/*Funcao responsavel por realizar todos os calculos da unidade de dilatacao*/
void dilatacao (double* vetorPeso, double* entrada, double* resultadoDilatacao);


/*Funcao responsavel por realizar todos os calculos da unidade de erosao*/
void erosao (double* vetorPeso, double* entrada, double* resultadoErosao);

/*Funcao responsavel por encontrar o supremo do resultado da erosao*/
double valorNu (double* vetorPesoB, double* entrada, double* resultadoErosao);

/*Funcao responsavel por encontrar o infimo do resultado da dilatacao*/
double valorMi (double* vetorPesoA, double* entrada, double* resultadoDilatacao);

/*Funcao responsavel por fazer o calculo do valor de alfa*/
double valorAlfa(double* vetorPesoA, double* vetorPesoB, double* entrada, double* resultadoDilatacao, double* resultadoErosao);

/*Funcao responsavel por realizar o calculo da componente linear dominante*/
double valorBeta(double* vetorPesoC, double* entrada);

/*Funcao responsavel por reunir a parte linear e nao linear do calculo do neuronio*/
double saidaNeuronio (double* vetorPesoA, double* vetorPesoB, double* vetorPesoC, double* entrada, double* resultadoDilatacao, double* resultadoErosao);


#endif

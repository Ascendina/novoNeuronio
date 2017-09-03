#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#include "definicoes.h"
#include "calculoNeuronio.h"


int main()
{
    double vetorPeso[tamanhoVetor], entrada[tamanhoVetor], resultadoDilatacao[tamanhoVetor], resultadoErosao[tamanhoVetor];
    double alfa, linear, saida;

    int i;
    for (i = 0; i < tamanhoVetor; i++){
        vetorPeso[i] = 1;
        entrada[i] = 1;
    }

    alfa = valorAlfa(vetorPeso,vetorPeso, entrada, resultadoDilatacao, resultadoErosao);

    printf("Valor resultante de ALFA \n");
    printf("Alfa = %lf\n", alfa);

    linear = valorBeta(vetorPeso,entrada);

    printf("Valor resultante Componente linear \n");
    printf("Linear = %lf\n", linear);

    saida = saidaNeuronio(vetorPeso, vetorPeso, vetorPeso, entrada, resultadoDilatacao, resultadoErosao);

    printf("Valor Saida Neuronio\n");
    printf("Saida = %lf\n", saida);

    /*double a = 3.14;
    double b = 4.5;

    printf("adicao = %lf\n", adicao(a,b));
    printf("adicaoDual = %lf\n", adicaoDual(a,b));
    printf("infimo = %lf\n", infimo(a,b));
    printf("supremo = %lf\n", supremo(a,b));

    a = infinitoPositivo;

    printf("adicao a infinito = %lf\n", adicao(a,b));
    printf("adicaoDual a infinito = %lf\n", adicaoDual(a,b));
    printf("infimo a infinito = %lf\n", infimo(a,b));
    printf("supremo a infinito = %lf\n", supremo(a,b));


    a = 3.14;
    b = infinitoPositivo;

    printf("adicao b infinito = %lf\n", adicao(a,b));
    printf("adicaoDual b infinito = %lf\n", adicaoDual(a,b));
    printf("infimo = %lf\n", infimo(a,b));
    printf("supremo = %lf\n", supremo(a,b));


    a = infinitoNegativo;
    b = infinitoPositivo;

    printf("adicao a e b infinito = %lf\n", adicao(a,b));
    printf("adicaoDual a e b infinito = %lf\n", adicaoDual(a,b));
    printf("infimo = %lf\n", infimo(a,b));
    printf("supremo = %lf\n", supremo(a,b));

    /*printf("testando valores\n");
    printf("The minimum value of LONG = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld\n", LONG_MAX);
    printf("The minimum value of DOUBLE LONG = %.9Lf\n", -DBL_MAX);
    printf("The maximum value of DOUBLE LONG = %.9Lf\n", DBL_MAX);*/

    return 0;
}

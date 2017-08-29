#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


#define infinitoPositivo DBL_MAX
#define infinitoNegativo -DBL_MAX

//* Funcao que recebe dois doubles e retorna a adicao da algebra minmax*//
double adicao (double a, double b){
    double resultado;

    if((a == infinitoPositivo || a == infinitoNegativo) && (b == infinitoNegativo || b == infinitoPositivo) ){
            resultado = infinitoPositivo;
    }
    else{
        resultado = a + b;
    }

    return resultado;
}

//* Funcao que recebe dois doubles e retorna a adicao dual da algebra minmax*//
double adicaoDual (double a, double b){
   double resultado;

    if((a == infinitoPositivo || a == infinitoNegativo) && (b == infinitoNegativo || b == infinitoPositivo) ){
            resultado = infinitoNegativo;
    }
    else{
        resultado = a + b;
    }

    return resultado;
}

/*Funcao que recebe dois doubles e retorna o ínfimo da morfologia matematica*/
double infimo(double a, double b){
    double resultado;

    if(a < b){
        resultado = a;
    }
    else{
        resultado = b;
    }
    return resultado;
}

/*Funcao que recebe dois doubles e retorna o supremo da morfologia matematica*/
double supremo(double a, double b){
    double resultado;

    if(a > b){
        resultado = a;
    }
    else{
        resultado = b;
    }
    return resultado;
}

int main()
{
    double a = 3.14;
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

/*
*Programa para caucular o Imc
*
*Nome: Arnaldo Pagani Junior, David Leonardeli
*
*Data : 11/08/2021
*
*Versão: 1.0
*
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    double imc, peso, altura;

    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Digite seu peso: ");
    scanf("%lf", &peso);

    printf("Digite seu altura: ");
    scanf("%lf", &altura);

        printf("%lf \t %lf", peso, altura);

    imc = peso / (altura*altura);

    if(imc < 20){
        printf("Nome: %s \n Abaixo do peso", nome);

    }else if(imc < 25){
        printf("Nome: %s \n Normal", nome);
    }else if(imc < 30){
        printf("Nome: %s \n Excesso de peso", nome);
    }else if(imc < 35){
        printf("Nome: %s \n Obesidade", nome);
    }else{
        printf("Nome: %s \n Obesidade Morbida", nome);
    }

    return 0;
}

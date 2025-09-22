#include <stdio.h>
/*Exercício 1. Escreva um programa que leia
10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição
que ele se encontra.*/

int main(){
    int tam=5, vet[tam], maior, posicao;

    printf("\tPREENCHA O VETOR");
//Laço para preencher o vetor
    for(int i = 0; i < tam; i++){
        printf("\nDigite aqui o valor do indice %d > ", i);
        scanf("%d", &vet[i]);
    }

//Laço para imprimir o vetor inteiro para o usuário
    printf("\n\tIMPRIMINDO VETORES");
    for(int i = 0; i < tam; i++){
        printf("\nIndice %d, Posicao %d", i, vet[i]);
    }

/*Aqui inicializo as variáveis, assim elas têm baae
para conparação. Quando eu quero descobrir e discri-
minar uma variável, sendo ela maior ou menor devo
sempre inicializar essas variáveis, de preferência
com o primeiro valor do vetor*/
     maior = vet[0];
     posicao = 0;
    printf("\n\n\tDESCOBRINDO E DECLARANDO O MAIOR VETOR");
    for(int i = 0; i < tam; i++){
        if(vet[i] > maior){ //Se o vetor desse ciclo for maior
            maior = vet[i]; //O vetor dessse ciclo assume maior
            posicao = i; //O Índice desse ciclo assume o ínidce pré-inicializado
        }
    }
//Saída
    printf("\nO maior valor e %d.\nNo indice %d.", maior, posicao);
/*As variáveis "i" que eu declaro em cada for, são
variáveis de bloco, elas só existem durante aquele
laço {...}. Após isso elas não existem mais, por
isso que em cada lçao elas se repetem depois de
declarar o tipo. Um dos problemas que tive aqui foi
que eu não sabia como manter uma variável que tives-
o indice da posição de "maior" guardado, por isso o
certo é inicializar o indice da posição junto do va-
lor do vetor fora de ambos um laço. Dentro do laço,
uso um if para comparar, se o valor do indice daque-
la volta for maior que o meu valor e indice pré-
determinados, troco os dois pelos daquela volta que
se repetirá até "<tam" e pronto.*/
    return 0;
}

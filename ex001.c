#include <stdio.h>
/*Exerc�cio 1. Escreva um programa que leia
10 n�meros inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posi��o
que ele se encontra.*/

int main(){
    int tam=5, vet[tam], maior, posicao;

    printf("\tPREENCHA O VETOR");
//La�o para preencher o vetor
    for(int i = 0; i < tam; i++){
        printf("\nDigite aqui o valor do indice %d > ", i);
        scanf("%d", &vet[i]);
    }

//La�o para imprimir o vetor inteiro para o usu�rio
    printf("\n\tIMPRIMINDO VETORES");
    for(int i = 0; i < tam; i++){
        printf("\nIndice %d, Posicao %d", i, vet[i]);
    }

/*Aqui inicializo as vari�veis, assim elas t�m baae
para conpara��o. Quando eu quero descobrir e discri-
minar uma vari�vel, sendo ela maior ou menor devo
sempre inicializar essas vari�veis, de prefer�ncia
com o primeiro valor do vetor*/
     maior = vet[0];
     posicao = 0;
    printf("\n\n\tDESCOBRINDO E DECLARANDO O MAIOR VETOR");
    for(int i = 0; i < tam; i++){
        if(vet[i] > maior){ //Se o vetor desse ciclo for maior
            maior = vet[i]; //O vetor dessse ciclo assume maior
            posicao = i; //O �ndice desse ciclo assume o �nidce pr�-inicializado
        }
    }
//Sa�da
    printf("\nO maior valor e %d.\nNo indice %d.", maior, posicao);
/*As vari�veis "i" que eu declaro em cada for, s�o
vari�veis de bloco, elas s� existem durante aquele
la�o {...}. Ap�s isso elas n�o existem mais, por
isso que em cada l�ao elas se repetem depois de
declarar o tipo. Um dos problemas que tive aqui foi
que eu n�o sabia como manter uma vari�vel que tives-
o indice da posi��o de "maior" guardado, por isso o
certo � inicializar o indice da posi��o junto do va-
lor do vetor fora de ambos um la�o. Dentro do la�o,
uso um if para comparar, se o valor do indice daque-
la volta for maior que o meu valor e indice pr�-
determinados, troco os dois pelos daquela volta que
se repetir� at� "<tam" e pronto.*/
    return 0;
}

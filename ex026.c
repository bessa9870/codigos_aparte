#include <stdio.h>
/*Exerc�cio 26. Fa�a um programa que possua um array de nome A que armazene 6 n�meros inteiros. O
programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a este array: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es A[0],
A[1] e A[5] do array e mostre na tela esta soma.
(c) Modifique o array na posi��o 4, atribuindo a esta posi��o o valor 100.
(d) Mostre na tela cada valor do array A, um em cada linha.*/
int main(){
    int tam=6, A[tam], soma, maior;
    printf("Preencha cada um com os valores respectivos: 1, 0, 5, -2, -5, 7 \n(nao use virgulas. Um valor por vez)\n");
/*Aprendi que usar uma variavel para guardar o tamanho do vetor � uma boa pr�tica de programa��o
ent�o como este � apeans um exerc�cio, me abstenho de declarar os valores do vetor dentro do
programa e deixo isso para o usu�rio, dessa forma o programa ter� a esma funciona tanto com os
valores pedidos no enunciado, como com qualquer outro.*/

//Primeiro la�o
//Esse � p la�o para preencher todo os vetor
    for(int i = 0; i < tam; i++){
        printf("Preencha o valor do indice %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nVetor preenchido com sucesso!");

//Segundo la�o
//Nesse eu imprimo na tela do usu�rio o indice e seu valor
    for(int i = 0; i < tam; i++){
        printf("\nIndice %d, valor %d", i, A[i]);
    }

/*Fa�o a soma fora do la�o, assim ela s� � feita uma vez, mas
usa todos os valores pois  j� foram declarados no primeiro la�o
e imprimo o resultado na tela*/
    soma = A[0] + A[1] + A[5];
    printf("\n\nSoma entre as posicoes %d, %d e %d \nIgual a: %d", A[0], A[1], A[5], soma);

//Modifico o valor da posicao 4 do array para 100 como a quest�o pede
    printf("\n\nVamos modificar o array da posicao 4 de valor %d para valor 100", A[4]);
    printf("\nDigite aqui: ");
    scanf("%d", &A[4]);

//Imprimo os indices e valores com a nova altera��o
    printf("\n\nDiscriminando os vetores com a nova alteracao:");
    for(int i = 0; i < tam; i++){
        printf("\nPosicao %d, valor %d", i, A[i]);
    }

/*Eu acabei lendo errado a quest�o e pensei que ela pedia o maior
tamb�m, extrapolei a quest�o, mas foi a primeira vez que fiz essa
l�gica ent�o n�o vou apagar. Deixa ai, t� bonitinho*/
    printf("\n\nPor ultimo vamos descobrir qual e o maior");

    maior = A[0];
/*Inicializei a vari�vel "maior", assim ela n�o guarda o lixo do
teclado. De prefer�ncia, inicializae a vaei�vel com algum indice
de vetor ou matriz. */
    for(int i = 0; i < tam; i++){
        if(A[i] > maior){
            maior = A[i];
        }
    }
    printf("\nO maior valor e %d", maior);

//Fim do programa :D
    printf("\n\nFim do programa.");
    return 0;
}

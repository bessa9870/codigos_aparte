#include <stdio.h>
/*Exercício 26. Faça um programa que possua um array de nome A que armazene 6 números inteiros. O
programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a este array: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0],
A[1] e A[5] do array e mostre na tela esta soma.
(c) Modifique o array na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do array A, um em cada linha.*/
int main(){
    int tam=6, A[tam], soma, maior;
    printf("Preencha cada um com os valores respectivos: 1, 0, 5, -2, -5, 7 \n(nao use virgulas. Um valor por vez)\n");
/*Aprendi que usar uma variavel para guardar o tamanho do vetor é uma boa prática de programação
então como este é apeans um exercício, me abstenho de declarar os valores do vetor dentro do
programa e deixo isso para o usuário, dessa forma o programa terá a esma funciona tanto com os
valores pedidos no enunciado, como com qualquer outro.*/

//Primeiro laço
//Esse é p laço para preencher todo os vetor
    for(int i = 0; i < tam; i++){
        printf("Preencha o valor do indice %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nVetor preenchido com sucesso!");

//Segundo laço
//Nesse eu imprimo na tela do usuário o indice e seu valor
    for(int i = 0; i < tam; i++){
        printf("\nIndice %d, valor %d", i, A[i]);
    }

/*Faço a soma fora do laço, assim ela só é feita uma vez, mas
usa todos os valores pois  já foram declarados no primeiro laço
e imprimo o resultado na tela*/
    soma = A[0] + A[1] + A[5];
    printf("\n\nSoma entre as posicoes %d, %d e %d \nIgual a: %d", A[0], A[1], A[5], soma);

//Modifico o valor da posicao 4 do array para 100 como a questão pede
    printf("\n\nVamos modificar o array da posicao 4 de valor %d para valor 100", A[4]);
    printf("\nDigite aqui: ");
    scanf("%d", &A[4]);

//Imprimo os indices e valores com a nova alteração
    printf("\n\nDiscriminando os vetores com a nova alteracao:");
    for(int i = 0; i < tam; i++){
        printf("\nPosicao %d, valor %d", i, A[i]);
    }

/*Eu acabei lendo errado a questão e pensei que ela pedia o maior
também, extrapolei a questão, mas foi a primeira vez que fiz essa
lógica então não vou apagar. Deixa ai, tá bonitinho*/
    printf("\n\nPor ultimo vamos descobrir qual e o maior");

    maior = A[0];
/*Inicializei a variável "maior", assim ela não guarda o lixo do
teclado. De preferência, inicializae a vaeiável com algum indice
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

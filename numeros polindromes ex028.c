#include <stdio.h>

int main() {
    int numero, original, reverso = 0, digito;

    printf("=== VERIFICADOR DE NUMEROS PALINDROMOS ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Armazena o n�mero original para compara��o
    original = numero;

    // Inverte o n�mero
    while (numero > 0) {
        digito = numero % 10;                 // Pega o �ltimo d�gito
        reverso = reverso * 10 + digito; // Constr�i o n�mero reverso
        numero = numero / 10;              // Remove o �ltimo d�gito
    }

    printf("\n=== RESULTADO ===\n");
    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d\n", reverso);

    if (original == reverso) {
        printf("%d e um numero palindromo!\n", original);
    } else {
        printf("%d nao e um numero palindromo.\n", original);
    }

    return 0;
}

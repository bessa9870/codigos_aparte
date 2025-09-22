#include <stdio.h>

int main() {
    int numero, original, reverso = 0, digito;

    printf("=== VERIFICADOR DE NUMEROS PALINDROMOS ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Armazena o número original para comparação
    original = numero;

    // Inverte o número
    while (numero > 0) {
        digito = numero % 10;                 // Pega o último dígito
        reverso = reverso * 10 + digito; // Constrói o número reverso
        numero = numero / 10;              // Remove o último dígito
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

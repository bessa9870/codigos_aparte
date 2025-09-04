#include <stdio.h>

int main(){
    int i;
    float S = 0.0;

    for(i = 10; i <=50; i++){
        float termo/*Variável de bloco*/ = (float)i / (i * i); //Ao quadrado
        if (i % 2==0){
            S -= termo;
        }else{
            S += termo;
        }
    }

    printf("Valor de S=%.4f", S);



    return 0;
}

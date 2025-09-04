#include <stdio.h>

int main(){
    int num=1;
    int den;
    float S = 0.0;

    for(den = 1; den <= 50; den++){
            S += (float) num/den;
            num += 2;
}

    printf("Valor de S%.4f", S);

    return 0;
}

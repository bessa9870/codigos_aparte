#include <stdio.h>

int main(){
//Declara��o de Vari�veis
    char olhos, cabelos, sexo;
    int idade;
    int total=0;
    int cont_f=0;
    int maior_idade=-1;//Na primeira compara��o o -1 some. Se fosse 0 seria o mesma coisa
//Entrada
    printf("Digite <sexoM/F> <OlhosA/V/C/P> <CabeloL/C/P>\n");
    scanf("%c %c %c", &sexo, &olhos, &cabelos);
    printf("Digite sua idade(-1 para sair):");
    scanf("%d", &idade);

    while(idade!=-1){
        if(idade> maior_idade)
            maior_idade=idade; //A primeira idade sempre ser� a maor. Conforme as idades forem sendo informadas, as compara��es ser�o feitas

        if((sexo== 'F' && sexo== 'f')&& //S� precisamos
          idade>=18 && idade<=35&&
          (olhos=='V' && olhos=='v')&&
          (cabelos=='L' && cabelos=='L')){//Os (( s�o por que eles pegam todos os requisitos
           cont_f++;//Contador de pessoas que atendem aos requisitos
            }
    total++;//Contador total de pessoas que passam pelo la�o independentemente das caracteristicas

    printf("Digite <sexoM/F> <OlhosA/V/C/P> <CabeloL/C/P>\n");
    scanf("%c %c %c", &sexo, &olhos, &cabelos);
    printf("Digite sua idade(-1 para sair):");
    scanf("%d", &idade);
    }
    printf("--------------RESULTADO--------------");
    if(total=0){
        printf("Nenhum habitante valido encontrado");
    }else{
    double porcentagem = (100*cont_f)/total;
    printf("Maior Idade:%d", maior_idade);
    printf("Percentual de mulheres 18-35, cabelos loiros e olhos verdes:&.3d", porcentagem);
    printf("Total de habitantes lidos: %d; Atendendo ao criterio: %d", total, cont_f);
    }
        return 0;
}

#include <stdio.h>

int main(){
    //declaração de variáveis
    char turma;
    int matricula;
    double nota;

    //acumuladores globais
    int total_alunos = 0;
    int total_aprovados = 0;
    double soma_geral = 0.0;
    double melhor_geral = -1.0;

    //laço externo - poercorre as turma de A a R
    for(turma = 'A'; turma <= 'R'; turma++){
        //variáveis para calculo em cada turma
        int cont_turma = 0;
        int aprov_turma = 0;
        double soma_turma = 0.0;
        double melhor_turma = -1.0;

        printf("== Digite dados da Turma %c ==\n", turma);

        //laço interno - lê os dados dos alunos da turma
        while(1){
            printf("Entre com a matricula:");
            if (scanf("%d", &matricula) != 1) {
                turma = 'R'; /* força saída do laço externo no EOF */
                break;
            }

            if (matricula == 0) {
                /* fim da turma (ou fim geral se for a primeira entrada) */
                break;
            }

            printf("Entre com a nota:");
            if (scanf("%lf", &nota) != 1) {
                turma = 'R'; /* erro de leitura ou EOF */
                break;
            }

            cont_turma++;
            soma_turma += nota;
            if (nota > 6)
                aprov_turma++;
            if(nota > melhor_turma)
                melhor_turma = nota;

            total_alunos++;
            soma_geral += nota;
            if(nota > 6)
                total_aprovados++;
            if(nota > melhor_geral)
                melhor_geral = nota;
        }

        //se a turma teve alunos, imprime resumo
        if(cont_turma > 0){
            double media_turma = soma_turma/cont_turma;
            printf("Turma %c:\n",turma);
            printf("  Aprovados:%d\n",aprov_turma);
            printf("  Media: %.2f\n\n",melhor_turma);
        }else{
            //se a matricula 0 foi digitada sem alunos -> encerra geral
            break;
        }
    }

    //Resumo geral
    printf("\n=== Resumo do Semestre ===\n");
    printf("Total de alunos aprovados: %d\n", total_aprovados);
    if(total_alunos > 0){
        printf("Media geral: %.2f\n",soma_geral/total_alunos);
        printf("Melhor nota geral: %.2f\n", melhor_geral);
    }else{
        printf("Media geral: N/A\n");
        printf("Melhor nota geral: N/A\n");
    }

    return 0;
}

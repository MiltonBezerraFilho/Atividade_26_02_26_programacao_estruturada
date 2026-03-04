/*Implemente um programa que classifique alunos conforme a nota:
• Nota ≥8.0: APROVADO;
• 6.0 ≤N ota < 8.0: RECUPERAÇÃO;
• Nota < 6.0: REPROVADO.
Defina um enum Situacao contendo as possíveis situações. O programa deve permitir que
o usuário escolha entre inserir uma nota ou encerrar o programa. Caso uma nota seja
inserida, ela deve ser passada para uma função que retorne um valor do tipo Situacao. O
valor retornado deve ser utilizado em um switch para imprimir explicitamente a situação
do aluno.*/

#include <stdio.h>
#include <stdlib.h>

enum Situacao {
    APROVADO,
    RECUPERACAO,
    REPROVADO
};
 
int main() {
    int input;
    float nota;
    enum Situacao status;

    printf("Digite 1 para inserir uma nota e 2 para encerrar o programa.\n");
    scanf("%d", &input);

    if (input == 2) {
        printf("Programa encerrado.\n");
        return 0;
    }
    if (input == 1) {
        printf("Digite sua nota: ");
        scanf("%f", &nota);

        if(nota >= 7){
            status = APROVADO;
        } else if(nota >= 4){
            status = RECUPERACAO;
        } else{
            status = REPROVADO;
        }
        switch (status)
        {
        case APROVADO:
            printf("Aprovado.\n");
            break;
        case RECUPERACAO:
            printf("Recuperacao.\n");
            break;
        case REPROVADO:
            printf("Reprovado.\n");
            break;
        default:
            printf("Valor invalido.\n");
            break;
        }
    } else {
        printf("Valor invalido.\n");
        return 1;
    }

    return 0;
}
/*Utilizando a mesma lógica da questão anterior, implemente um programa que leia N alunos
com sua respectiva nota (utilize struct Aluno para armazenar os dados dos alunos —
nome, nota, situação) e armazene os dados em um vetor de structs. Calcule:
• Percentual de aprovados;
• Percentual de reprovados;
• Média da turma, utilizando uma função que receba o vetor como parâmetro.
Ao final, imprima um relatório com as informações calculadas.*/

#include <stdio.h>
#include <stdlib.h>

enum Situacao {
    APROVADO,
    RECUPERACAO,
    REPROVADO
};

struct Aluno 
{
    char nome[50];
    float nota;
    enum Situacao status;
};

float calcularMediaTurma(struct Aluno *vetor, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i].nota;
    }
    return (n > 0) ? (soma / n) : 0;
}
 
int main() {
int n, i;
    int contAprovados = 0, contReprovados = 0;

    printf("Digite a quantidade de alunos (N): ");
    scanf("%d", &n);

    struct Aluno *turma = (struct Aluno *) malloc(n * sizeof(struct Aluno));

    if (turma == NULL) {
        printf("Erro de alocação!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nNome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", turma[i].nome);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);

        if (turma[i].nota >= 7.0) {
            turma[i].status = APROVADO;
            contAprovados++;
        } else if (turma[i].nota >= 4.0) {
            turma[i].status = RECUPERACAO;
        } else {
            turma[i].status = REPROVADO;
            contReprovados++;
        }
    }

    float mediaGeral = calcularMediaTurma(turma, n);
    float percAprovados = ((float)contAprovados / n) * 100;
    float percReprovados = ((float)contReprovados / n) * 100;

    printf("\n========== RELATÓRIO DA TURMA ==========\n");
    printf("Média Geral da Turma: %.2f\n", mediaGeral);
    printf("Percentual de Aprovados: %.1f%%\n", percAprovados);
    printf("Percentual de Reprovados: %.1f%%\n", percReprovados);
    printf("========================================\n");

    free(turma);
    return 0;
    return 0;
}
//REVER
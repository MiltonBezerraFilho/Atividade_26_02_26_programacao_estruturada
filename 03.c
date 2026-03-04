/*Implemente um sistema que cadastre um número N de alunos. Para cada aluno, armazene:
Matrícula, Nome e Nota. O programa deve:
• Permitir o cadastro;
• Listar todos os alunos;
• Informar o aluno com a maior nota.
As informações devem ser armazenadas em um vetor de struct Aluno. A impressão deve
ser feita por meio de uma função.*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota;
};

void printAluno(struct Aluno a) {
    printf("Matricula: %d | Nome: %-15s | Nota: %.2f\n", a.matricula, a.nome, a.nota);
}

int main() {
    int n, i, indiceMaior = 0;

    printf("Digite quantos alunos vão ser cadastrados: ");
    scanf("%d", &n);

    struct Aluno *turma = (struct Aluno *) malloc(n * sizeof(struct Aluno));

    if (turma == NULL) {
        printf("Erro de memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Cadastro do aluno N %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]s", turma[i].nome);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);
        if (turma[i].nota > turma[indiceMaior].nota){
            indiceMaior = i;
        }
    }
    printf("\n---Lista de alunos---\n");
    for(i = 0; i < n; i++) {
        printAluno(turma[i]);
    }

    printf("\n---O aluno com maior nota---\n");
    printAluno(turma[indiceMaior]);

    free(turma);

    return 0;
}
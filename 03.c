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

    return 0;
}
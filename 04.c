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

    return 0;
}
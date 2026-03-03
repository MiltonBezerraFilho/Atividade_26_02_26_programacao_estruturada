/*Observação:
Para todos os programas que requeiram o uso de arrays, recomenda-se a implementação de duas
versões:
• Uma versão em que o número de elementos (N) seja definido diretamente no código. Nesse
caso, a quantidade de valores a serem inseridos deve ser informada ao usuário na tela (por
exemplo: “Digite 5 números inteiros”);
• Uma versão em que o número de elementos (N) seja informado pelo usuário. Nesse caso,
o tamanho do array deve ser definido dinamicamente.*/

/*Implemente um programa que leia N números inteiros. Armazene os valores em um array.
Determine os menores e maiores valores armazenados, calcule a média entre o menor
e o maior valor e determine as posições (índices) em que esses valores ocorrem.
Ao final, imprima todas as informações calculadas.*/

#include <stdio.h>
#include <stdlib.h>
# define NumEstatico 5

void CalcularValores (int *array, int n) {
    int menor, maior, PosMenor = 0, PosMaior = 0;
    float media;

    for (int i = 0; i < n; i++){
        if (i == 0) {
            maior = menor = array[i];
        } else {
            if (array[i] > maior) {
                maior = array[i];
                PosMaior = i;
            } if (array[i] < menor) {
                menor = array[i];
                PosMenor = i;
            }
        }
    } 
    media = (float)(menor + maior) / 2.0;
    
    printf("O maior valor eh %d (Na posicao %d)\n", maior, PosMaior);
    printf("O menor valor eh %d (Na posicao %d)\n", menor, PosMenor);
    printf("A media entre as extremidades eh %.2f\n", media);
}

void LeituraInput (int *array, int n) {
    for (int i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &array[i]);
    }
}

int main() {
    int escolha, n;
    
    printf("Digite 1 para estatico e 2 para dinamico: ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        int vetor[NumEstatico];
        printf("Digite %d numeros inteiros\n", NumEstatico);
        LeituraInput(vetor, NumEstatico);
        CalcularValores(vetor, NumEstatico);
    } else if (escolha == 2) {
        printf("Digite o numeros de elementos do array: ");
        scanf("%d", &n);

        int *vetDinamico = (int *) malloc(n * sizeof(int));
        if (vetDinamico == NULL){
            printf("Memoria insuficiente");
            return 1;
        }LeituraInput(vetDinamico, n);
        CalcularValores(vetDinamico, n);

        free(vetDinamico);
        vetDinamico = NULL;
    } else{
        printf("Opcao invalida.\n");
    }
    
    return 0;
}
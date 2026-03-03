/*Em um programa, crie uma matriz 4×4 e preencha-a com valores inteiros (os dados podem
ser definidos diretamente no código). Com essa matriz, calcule:
• A soma da diagonal principal;
• A soma da diagonal secundária.
Ao final, informe se as duas somas são iguais ou diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 4

void analizarMatriz (int matriz[TAMANHO][TAMANHO]){
    int somaPrincipal = 0, somaSecundaria = 0;

    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            if (i == j) {
                somaPrincipal += matriz[i][j];
            } if (i + j == TAMANHO - 1){
                somaSecundaria += matriz[i][j];
            }
        }
    }
    printf("A soma principal eh: %d\n", somaPrincipal);
    printf("A soma secundaria eh: %d\n", somaSecundaria);
    if (somaPrincipal == somaSecundaria) {
        printf("A soma principal e a secundaria sao iguais.\n");
    } else {
        printf("A soma principal e a secundaria sao diferentes.\n");
    }
}

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    srand(time(NULL));

    for(i = 0; i < TAMANHO; i++){
        for(j = 0; j < TAMANHO; j++){
            matriz[i][j] = rand() % 100;
        }
    } 
    for(i = 0; i < TAMANHO; i++){
        for(j = 0; j < TAMANHO; j++){
            printf("%d\n", matriz[i][j]);
        }    
    }        
    analizarMatriz (matriz);
    return 0;
}
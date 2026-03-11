/*Implemente um sistema que armazene produtos com: Código, Nome, Categoria e Preço.
As categorias possíveis são ALIMENTO, BEBIDA e LIMPEZA. Defina um enum para
representar a categoria e utilize uma struct para armazenar os dados. O programa deve:
• Cadastrar uma quantidade N de produtos (informado pelo usuário);
• Listar os produtos por categoria;
• Calcular o valor total dos produtos cadastrados.*/

#include <stdio.h>
#include <stdlib.h>

enum Categoria {
    ALIMENTO,
    BEBIDA,
    LIMPEZA
};

struct Produtos {
    int codigo;
    char nome[50];
    enum Categoria tipo;
    float preco;
};

void printItens(Produtos) {
    printf("s")
}

int main() {
    int n;
    printf("Digite o numero de produtos a serem registrados: ");
    scanf("%d", &n);
    struct Produtos produtos[n];

    for(int i = 0; i < n; i++) {
        printf("Digite o codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Digite o nome: ");
        scanf("%s", produtos[i].nome);
        printf("Digite a categoria\n1 para alimento\n 2 para bebida\n 3 para limpeza: ");
        scanf("%d", &produtos[i].tipo);
        printf("Digite o preco: ");
        scanf("%f", &produtos[i].preco);
    }

    return 0;
}
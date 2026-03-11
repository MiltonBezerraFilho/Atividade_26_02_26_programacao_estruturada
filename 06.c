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

int main() {
    int n;
    printf("Digite o numero de produtos a serem registrados: ");
    scanf("%d", &n);

    

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
#include <conio.h>;

int cont = 0, sair = 1;

struct Produto{
    int codigo;
    char nome[50];
    float preco;
};

struct Produto produtos[50];

void cadastraProduto(){
    printf("Digite o código do produto: ");
    scanf("%d", &produtos[cont].codigo);

    printf("Digite o nome do produto: ");
    fflush(stdin);
    gets(produtos[cont].nome);

    printf("Digite o preço do produto: ");
    scanf("%f", &produtos[cont].preco);

    cont++;
}

void imprimeProduto(){
    for(int i = 0; i < cont; i++){
        printf("Produto %d: %d \t%s R$ %.2f \n", i, produtos[i].codigo, produtos[i].nome, produtos[i].preco);
    }
}

void buscaPorCodigo(){
    int i = 0, cod, cont = 0;

    printf("\nDigite o código do produto: ");
    scanf("%d", &cod);

    while(i == 0){
        if(produtos[cont].codigo == cod){
            printf("Preço: R$ %.2f \n", produtos[cont].preco);
            i = 1;
        }
        cont++;
    }
}


main(){
    setlocale(LC_ALL, "Portuguese");

    do{
        cadastraProduto();

        printf("\nCadastrar mais um produto? (sim = 1)(não = 0)  ");
        scanf("%d", &sair);

        system("cls");
    }
    while(sair != 0);
    sair = 1;

    do{
        imprimeProduto();

        buscaPorCodigo();

        printf("\nConsultar mais um produto? (sim = 1)(não = 0)  ");
        scanf("%d", &sair);

        system("cls");
    }
    while(sair != 0);

}

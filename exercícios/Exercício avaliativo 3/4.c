#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
#include <conio.h>;

int cont = 0, sair = 1;

struct Conta{
    int cpf;
    char nome[50];
    float saldo;
};

struct Conta clientes[3];

void movimento(){
    int cpf, indice;
    float valor;

    printf("Digite o CPF da conta para movimentar: ");
    scanf("%d", &cpf);

    printf("Digite o valor para movimentar: ");
    scanf("%f", &valor);

    for(int i = 0; i < 3; i++){
        if(clientes[i].cpf == cpf){
            clientes[i].saldo += valor;
            indice = i;
        }
    }

    printf("%d %s R$ %.2f", clientes[indice].cpf, clientes[indice].nome, clientes[indice].saldo);
}

main(){
    setlocale(LC_ALL, "Portuguese");

    for(int i = 0; i < 3; i++){
        printf("Nome da conta %d: ", i+1);
        fflush(stdin);
        gets(clientes[i].nome);

        printf("CPF da conta %d: ", i+1);
        scanf("%d", &clientes[i].cpf);

        printf("Saldo inicial da conta %d: ", i+1);
        scanf("%f", &clientes[i].saldo);

        system("cls");
    }

    do{
        movimento();

        printf("\nRealizar mais uma movimentação? (sim = 1)(não = 0)  ");
        scanf("%d", &sair);

        system("cls");
    }
    while(sair != 0);

}

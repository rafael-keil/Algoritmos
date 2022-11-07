#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

struct Dados{
    char nome[50];
    int idade;
    int telefone;
};

struct Dados usuario[5];

int maior, maiorID, menor, menorID;

void input(){
    for(int i = 0; i < 5; i++){

        printf("Digite o nome do usuário %d: ", i);
        fflush(stdin);
        gets(usuario[i].nome);

        printf("Digite a idade do usuário %d: ", i);
        scanf(" %d", &usuario[i].idade);

        if(usuario[i].idade > maior){
            maior = usuario[i].idade;
            maiorID = i;
        }

        if(usuario[i].idade < menor || menor == 0){
            menor = usuario[i].idade;
            menorID = i;
        }

        printf("Digite o telefone do usuário %d: ", i);
        scanf(" %d", &usuario[i].telefone);

        system("cls");

    }
}

void printar(){

    printf("Usuario mais novo: \n");
    printf("Posição ocupada: %d\n", menorID);
    printf("Nome: %s\n", usuario[menorID].nome);
    printf("Idade: %d\n", usuario[menorID].idade);
    printf("Telefone: %d\n", usuario[menorID].telefone);

    printf("\n\nUsuario mais velho: \n");
    printf("Posição ocupada: %d\n", maiorID);
    printf("Nome: %s\n", usuario[maiorID].nome);
    printf("Idade: %d\n", usuario[maiorID].idade);
    printf("Telefone: %d\n", usuario[maiorID].telefone);

}

void main(){
    setlocale(LC_ALL,"Portuguese");

    input();

    printar();
}

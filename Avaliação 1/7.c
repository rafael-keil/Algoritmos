#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

int cod, nascimento, ingresso, idade, trabalhado;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o c�digo do funcion�rio: ");
    scanf("%d", &cod);

    printf("Digite o ano de nascimento do funcion�rio: ");
    scanf("%d", &nascimento);

    printf("Digite o ano de ingresso do funcion�rio: ");
    scanf("%d", &ingresso);

    idade = 2020 - nascimento;
    trabalhado = 2020 - ingresso;

    printf("Idade: %d anos\n", idade);
    printf("Tempo trabalhado: %d anos\n", trabalhado);
    printf("Situa��o: ");

    if(idade >=  65 || trabalhado >= 30 || (idade >= 60 && trabalhado >= 25)){
        printf("Requer aposentadoria");
    }
    else{
        printf("N�o requer aposentadoria");
    }


    getch();
}

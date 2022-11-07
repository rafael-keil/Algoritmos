#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

int cod, nascimento, ingresso, idade, trabalhado;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o código do funcionário: ");
    scanf("%d", &cod);

    printf("Digite o ano de nascimento do funcionário: ");
    scanf("%d", &nascimento);

    printf("Digite o ano de ingresso do funcionário: ");
    scanf("%d", &ingresso);

    idade = 2020 - nascimento;
    trabalhado = 2020 - ingresso;

    printf("Idade: %d anos\n", idade);
    printf("Tempo trabalhado: %d anos\n", trabalhado);
    printf("Situação: ");

    if(idade >=  65 || trabalhado >= 30 || (idade >= 60 && trabalhado >= 25)){
        printf("Requer aposentadoria");
    }
    else{
        printf("Não requer aposentadoria");
    }


    getch();
}

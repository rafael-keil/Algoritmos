#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

int n1;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d",&n1);

    if( n1%2 == 0 ){
        printf("O número é par e");
    }
    else{
        printf("O número é impar e ");
    }

    if ( n1 > 0 ){
        printf(" positivo.");
    }
    else{
        printf("negativo.");
    }

    getch();
}

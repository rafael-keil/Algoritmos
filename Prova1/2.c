#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
#include <conio.h>;

float n1, maior, media, positivo, negativo, produto[5];
int i, v;

main() {
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%f", &n1);

        if(n1 > maior ){
            maior = n1;
        }

        if(n1 > 0){
            positivo++;
        }
        if(n1 < 0){
            negativo++;
        }
        if(n1 != 0){
            produto[i] = n1 * 2;
        }

        media += n1;
    }

    media /= 5;

    printf("Maior número lido: %.2f \n", maior);

    printf("Média dos elementos lidos: %.2f \n", media);

    printf("Produtos: ");
    for(v = 0; v < 5; v++){
        if(produto[v] != 0){
            printf("%.2f  ", produto[v]);
        }
    }

    printf("\nElementos positivos: %.2f \n", positivo);
    printf("Elementos negativos: %.2f", negativo);

    getch();
}

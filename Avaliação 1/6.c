#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

int n[6], contador, cont;
float media;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite 6 números separados por enter: ");

    for(contador = 0; contador < 6; contador++){
        scanf("%d",&n[contador]);
        if (n[contador] > 0){
            cont++;
            media = media + n[contador];
        }
    }

    printf("\n%d valores positivos \n", cont);
    printf("Média: %.2f", media/cont);

    getch();
}

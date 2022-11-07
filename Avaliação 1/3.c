#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

float n1, n2, n3, temp;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite os 3 números separados por enter: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n2 > n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("\n%.2f \n", n1);
    printf("%.2f \n", n2);
    printf("%.2f \n", n3);
    printf("\n%.2f \n", n3);
    printf("%.2f \n", n2);
    printf("%.2f \n", n1);

    getch();
}

#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

float a, b, c;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite os 3 números separados por enter: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if( a<b+c && b<a+c && c<a+b){
        if(a==b && b==c){
            printf("Equilátero \n");
        }
        else{
            if(a==b || b==c || c==a){
                printf("Isóceles \n");
            }
            else{
                printf("Escaleno \n");
            }
        }
        printf("%.2f",(a+b+c)/3);
    }
    else{
        printf("Não é um triângulo");
    }

    getch();
}

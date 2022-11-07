#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
#include <conio.h>;

float venda, bonus;
int i = 0;

main() {
    setlocale(LC_ALL, "Portuguese");

    for(i; i < 10; i++){
        bonus = 100;

        printf("Digite uma Venda: ");
        scanf("%f", &venda);

        if(venda > 3000){
            bonus += venda * 0.1;
        }
        if(venda > 5000){
            bonus += venda * 0.05;
        }

        printf("Bonus: %.2f \n", bonus);
    }

    getch();
}

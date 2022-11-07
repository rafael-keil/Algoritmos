#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

float salario, percentual;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o salário: ");
    scanf("%f", &salario);

    if(salario <= 400){
        percentual = 0.15;
    }
    else{
        if (salario <= 800){
            percentual = 0.12;
        }
        else{
            if (salario <= 1200){
                percentual = 0.1;
            }
            else{
                if (salario <= 2000){
                    percentual = 0.07;
                }
                else{
                    percentual = 0.04;
                }
            }
        }
    }

    printf("Novo salário: %.2f \n", salario+(salario*percentual));
    printf("Reajuste ganho: %.2f \n", salario*percentual);
    printf("Em percentual: %.f%% \n", 100*percentual);

    getch();
}

#include <stdio.h>;
#include <stdlib.h>;
#include <locale.h>;
#include <conio.h>;

float salario;

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o salário: ");
    scanf("%f", &salario);


    if(salario <= 2000){
        printf("Isento");
    }
    else{
        if(salario <= 3000){
           printf("R$ %.2f", (salario - 2000)*0.08);
        }
        else{
            if(salario <= 4500){
                printf("R$ %.2f", 1000*0.08 + (salario - 3000)*0.18);
            }
            else{
                printf("R$ %.2f", 1000*0.08 + 1500*0.18 + (salario - 4500)*0.28);
            }
        }
    }

    getch();
}

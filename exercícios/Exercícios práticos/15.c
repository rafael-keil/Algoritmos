#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float vendedor, cod, preco, quant, total;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o vendedor: ");
    scanf("%f",&vendedor);
    printf("Digite o código da peça: ");
    scanf("%f",&cod);
    printf("Digite o preço unitário: ");
    scanf("%f",&preco);
    printf("Digite a quantidade vendida: ");
    scanf("%f",&quant);

    total = preco * quant;

    printf("Valor total: %.2f \n", total);
    printf("Valor da comissão: %.2f", total*0.05);
}

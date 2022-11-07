#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int n1;

int main() {
    printf("Digite um número: ");
    scanf("%d",&n1);
    printf("Antecessor: %d \n", n1 -1);
    printf("Sucecessor: %d \n", n1 +1);
}

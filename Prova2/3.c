#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


float num[3][3], maior[3];


void leMatriz(){

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            printf("Digite o número da linha %d e coluna %d: ", x+1, y+1);
            fflush(stdin);
            scanf("%f", &num[x][y]);


            if(num[x][y] > maior[x]){
                maior[x] = num[x][y];
            }
        }

        system("cls");
    }

}

void imprimeMatriz(){

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            printf(" %.2f ", num[x][y]);
        }
        printf("\n");
    }

}

void maiorElementoLinha(){

    printf("\n");

    for(int x = 0; x < 3; x++){
        printf("Maior número da linha %d: %.2f\n", x+1, maior[x]);
    }

}

void diagonalMatriz(){

    printf("\n");

    printf("Diagonal principal: ");

    for(int x = 0; x < 3; x++){
        printf(" %.2f ", num[x][x]);
    }
}

void main(){
    setlocale(LC_ALL,"Portuguese");

    leMatriz();

    imprimeMatriz();

    maiorElementoLinha();

    diagonalMatriz();
}

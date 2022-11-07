#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

struct Aluno{
    int ano;
    int idade;
    int curso;
    char imp;
};

int cont, terceiro, terceiroImp;

float media, porcent;

struct Aluno dados[100];



void input(){

    char temp;
    char sair;

    do{
        do{
            printf("Qual seu ano escolar? ");
            scanf(" %d", &dados[cont].ano);

            printf("Quantos anos você tem? ");
            scanf(" %d", &dados[cont].idade);

            printf("Você pretende fazer faculdade [s]im ou [n]ão? ");
            scanf(" %c", &temp);

            if(temp == 's' || temp == 'S'){
                printf("Qual curso? ([1] computação) ([2] sistemas de informação) ([3] outros) ");
                scanf("%d", &dados[cont].curso);
            }

            printf("Você considera importante participar de projetos em interação com a Universidade? [s]im ou [n]ão ");
            scanf(" %c", &dados[cont].imp);
        }
        while(dados[cont].idade < 1);

        printf("\nDeseja [s]air? ");
        sair = getche();
        system("cls");

        if(dados[cont].ano == 3){
            terceiro++;
            if(temp == 's' || temp == 'S'){
                terceiroImp++;
            }
        }

        media += dados[cont].idade;

        if(dados[cont].curso == 1 || dados[cont].curso == 2){
            porcent++;
        }

        cont++;
    }
    while(!strchr("Ss", sair));

    media /= cont;

    porcent = (porcent / cont) * 100;
}

void main(){
    setlocale(LC_ALL,"Portuguese");

    input();

    printf("Alunos do terceiro ano que participaram do projeto: %d\n", terceiro);
    printf("Média de idade: %.2f\n", media);
    printf("Percentual de alunos que querem fazer cursos voltados para área da informática e computação: %.2f\n", porcent);
    printf("Alunos que estão no terceiro ano e acham importante interagir com a graduação: %d\n", terceiroImp);
}

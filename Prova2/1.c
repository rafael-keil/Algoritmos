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

            printf("Quantos anos voc� tem? ");
            scanf(" %d", &dados[cont].idade);

            printf("Voc� pretende fazer faculdade [s]im ou [n]�o? ");
            scanf(" %c", &temp);

            if(temp == 's' || temp == 'S'){
                printf("Qual curso? ([1] computa��o) ([2] sistemas de informa��o) ([3] outros) ");
                scanf("%d", &dados[cont].curso);
            }

            printf("Voc� considera importante participar de projetos em intera��o com a Universidade? [s]im ou [n]�o ");
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
    printf("M�dia de idade: %.2f\n", media);
    printf("Percentual de alunos que querem fazer cursos voltados para �rea da inform�tica e computa��o: %.2f\n", porcent);
    printf("Alunos que est�o no terceiro ano e acham importante interagir com a gradua��o: %d\n", terceiroImp);
}

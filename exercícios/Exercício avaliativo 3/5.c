#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

#define MAX 20

float mediaProva1, mediaProva2, mediaTrabalho;

struct Notas{
    float prova1;
    float prova2;
    float trabalho;
    float media;
    char conceito;
};

struct Notas aluno[MAX];

main(){
    setlocale(LC_ALL, "Portuguese");

    //---------------- input de dados -----------------

    for(int i = 0; i < MAX; i++){

        do{
            printf("Nota da prova 1 do aluno %d: ", i+1);
            scanf("%f", &aluno[i].prova1);
        }
        while(aluno[i].prova1 > 10 || aluno[i].prova1 < 0);

        mediaProva1 += aluno[i].prova1;

        do{
            printf("Nota da prova 2 do aluno %d: ", i+1);
            scanf("%f", &aluno[i].prova2);
        }
        while(aluno[i].prova2 > 10 || aluno[i].prova2 < 0);

        mediaProva2 += aluno[i].prova2;

        do{
            printf("Nota do trabalho do aluno %d: ", i+1);
            scanf("%f", &aluno[i].trabalho);
        }
        while(aluno[i].trabalho > 10 || aluno[i].trabalho < 0);

        mediaTrabalho += aluno[i].trabalho;

        aluno[i].media = (aluno[i].prova1 * 0.4) + (aluno[i].prova2 * 0.4) + (aluno[i].trabalho * 0.2);

        if(aluno[i].media >= 9){
            aluno[i].conceito = 'A';
        }
        else{
            if(aluno[i].media >= 7.5){
                aluno[i].conceito = 'B';
            }
            else{
                if(aluno[i].media >= 6){
                    aluno[i].conceito = 'C';
                }
                else{
                    if(aluno[i].media >= 3){
                        aluno[i].conceito = 'R';
                    }
                    else{
                        aluno[i].conceito = 'D';
                    }
                }
            }
        }
        system("cls");
    }

    mediaProva1 /= MAX;
    mediaProva2 /= MAX;
    mediaTrabalho /= MAX;

    //---------------- print de dados -----------------

    for(int i = 0; i < MAX; i++){
        printf("Aluno %d: %.2f %.2f %.2f %.2f %c \n", i+1, aluno[i].prova1, aluno[i].prova2, aluno[i].trabalho, aluno[i].media, aluno[i].conceito);
    }

    printf("Médias da turma: %.2f %.2f %.2f", mediaProva1, mediaProva2, mediaTrabalho);
}

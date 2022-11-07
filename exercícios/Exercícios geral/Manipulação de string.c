#include <stdio.h>
#include <conio.h>
#include <string.h>
 main (){


 char tecla = 'n'; // tecla igual a sair
 char testeChar; // caracter
 char testeString [30]; // string


/* char string [256];
  printf ("Insert your full address: ");
  gets (string);     // warning: unsafe (see fgets instead)
  printf ("Your address is: %s\n",string);
  */

// leitura de string

 printf ("\n ENTRE COM UMA STRING DE TAMANHO ATÉ 10   ");
gets(testeString);
//scanf("%s", &testeString);
 printf ("\n IMPRIMINDO a string:   %s", testeString);


    printf(" \n TESTANDO O CHAR - CARACTER - com scanf: digite um caracter   \n ");
    scanf("%c", &testeChar);
    printf ("\n IMPRIMINDO O CARACTER testeChar:   %c", testeChar);

    printf("\n \n TESTANDO O CHAR - CARACTER - com getche():  gitite S para sim e N para nao \n");
    testeChar = getche();
    /* o comando getche() pega o caracter que foi digitado e atribui a variavel testechar  */

    printf ("\n IMPRIMINDO O CARACTER testeChar:   %c \n \n ", testeChar);

/*   //strchr() compara o que tem dentro da variável com a string.
se o que tem dentro da variavel esta contido dentro da string, o resultado e verdadeiro
  é equivalente a este teste com o OU: tecla == 'n'|| tecla == 'N' */

if(strchr("Nn", tecla))
  printf(" \n a letra %c esta contida na string de comparacaso \n ", tecla);




 // ESTE COMANDO COPIA UMA STRING PARA DENTRO DE UMA VARIAVEL TIPO STRING
 strcpy(testeString, "MARIA");
  printf ("\n IMPRIMINDO a string:   %s", testeString);

  if (strcmp(testeString,"MARIA") == 0)
     printf("\n sim e igual a MARIA");
    else
     printf("\n NAO e");





return 0;
}

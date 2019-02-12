#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int verificavogal (char M)
{
if(M=='a' || M=='A' || M=='e' || M=='E' || M=='i' || M=='I' || M=='o' || M=='O' || M=='u' || M=='U')
return(1);
else
return(0);
}
main()
{
char nome[30];
int x,y=0,tam, soma=0;
printf("\n\n DIGITE UM NOME: ");
gets(nome);
tam=strlen(nome);
printf("\n\t\tO nome digitado eh: %s ",nome);
printf("\n\nNa posicao [%d] tem o primeiro caracter digitado que eh: %c ",y, nome[0]);
printf("\n\nNa posicao [%d] tem o ultimo caracter digitado que eh: %c ",(y=tam-1), nome[tam-1]);
printf("\n\nNa posicao [%d] tem o quarto caracter digitado que eh: %c ",y=3, nome[3]);
printf("\n\nNa posicao do primeiro ao terceiro caracter tem : ");
printf("\n\n");
for(x=0;x<=2;x++)
{
printf("\t[%d] ",x=x+0);
}
printf("\n\n");
for(x=0;x<=2;x++)
{
printf("\t %c ",nome[x]);
}
printf("\nNa posicao do primeiro ao ultimo caracter tem o nome completo: ");
printf("\n\n");
for(x=0;x<=tam-1;x++)
{
printf("\t[%d]",x=x+0);
}
printf("\n\n");
//Mostrar quantas letras tem o nome
for(x=0;x<=tam-1;x++)
{
printf("\t %c",nome[x]);
}
printf("\n\n");
printf("\nO nome %s tem %d letras: ",nome,tam);
printf("\n\n");
//Mostra o nome escrito de trás prá frente
printf("O nome %s escrito de tras pra frente eh: ",nome);
printf("\n\n\t");
for(x=tam-1;x>=0;x--)
printf("%c",nome[x]);
printf("\n\n");
//Mostra as 3 primeiras letras escritas de trás prá frente
printf(" As 3 primeiras letras escritas de tras pra frente eh: ",nome);
printf("\n\n");
for(x=tam-1;x>=0;x--)
if(x<=2)
printf("\t%c",nome[x]);
printf("\n\n");
//Mostrar da 4a letra até a última
printf(" Da 4 letra escrita ate a ultima eh: ",nome);
printf("\n\n");
for(x=0;x<=tam-1;x++)
if(x>2)
printf("\t%c",nome[x]);
printf("\n\n");
//Mostrar o que eh vogal e o que eh consoante
for(x=0;x<=tam-1;x++)
if(verificavogal(nome[x])==1 )
printf("\nA letra [ %c] eh uma VOGAL: ",nome[x]);
else
printf("\nA letra [ %c] eh uma CONSOANTE: ",nome[x]);
printf("\n\n");
//Mostrar quantas vogais e quantas consoantes tem o nome
for(x=0;x<=tam-1;x++)
if(verificavogal(nome[x])==1 )
soma++;
{
printf("\nO nome %s tem %d vogais: ",nome,soma);
printf("\t %c",nome[x]);
printf("\nO nome %s tem %d consoantes: ",nome,tam-soma);
printf("\t %c",nome[x]);
}
printf("\n\n");
system("pause");
return(0);
}

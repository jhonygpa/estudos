#include<cstdio>
#include<cstdlib>
#include<string.h>
int main(void){
 char nome[50];
 int i,letras,j;
 printf("digite seu nome");
 	gets(nome);
 	letras=strlen(nome);
 
for(i=0;i<=letras-1;j++){
	for(j=0;j<=i;j++){
		printf("%c",nome[j]);
	}
printf("\n");
}




system("pause");

}

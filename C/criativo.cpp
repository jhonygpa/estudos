#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<windows.h>

int main(void){
	char nome[50];
	int i,a,b,n1,vogal=0,idade,nvogal,menu;
	printf("");
	
	
	printf("\nDigite Seu Nome\n");
	gets(nome);
	
	printf("Digite Sua Idade\n");
	scanf("%i",&idade);
	n1=strlen(nome);
	printf("\nSeu nome tem %i letras\n",n1);
	for(i=0;i<=9;i++){
		if(nome[i]=='a' || nome[i]=='e'|| nome[i]=='i'|| nome[i]=='o'|| nome[i]=='u'){
			vogal=vogal+1;
		}
	}
	printf("Total de Vogais [%i]\n",vogal);
	if(idade<=17){
		printf("Voce e Menor de Idade\n");
	}else{
		printf("Voce e Maior de Idade\n");
	}
	
	digite:
	
	printf("Digite Quantas Vogais Voce Tem\n");
	scanf("%i",&nvogal);

	while(nvogal!=vogal){
		printf("\nVoce Errou\n");
		goto digite;
		system("slc");
	}
	system("pause");
}

	
	

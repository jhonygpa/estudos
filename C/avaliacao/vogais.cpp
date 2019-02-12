#include<cstdio>
#include<cstdlib>
int main(void){
	int i,vogal=0;
	char nome[20];
	printf("\nDigite seu nome\n");
	gets(nome);
	for(i=0;i<=20;i++){
		if(nome[i]=='a' || nome[i]=='e'|| nome[i]=='i'|| nome[i]=='o'|| nome[i]=='u'){
			vogal=vogal+1;
		}
	}
	printf("Total de Vogais [%i]",vogal);
}

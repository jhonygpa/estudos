#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<windows.h>
int main(void){
	char nome[50],senha[10],senha2[10];
	int i,a,b,n1,vogal=0,idade,nvogal,menu,opc;
printf("\t\t\t:::Menu:::\n");
	menu:
printf("\n1-Criarconta\n2-Contador de Vogais\n3-Jogo Vogal");
	scanf("%i",&menu);
	switch(menu){
	case 1:
			printf("Digite Sua Idade\n");
			scanf("%i",&idade);
			if(idade<=17){
				printf("Voce Nao Pode Criar a Conta [Menor infrator]");
				goto menu;
			}
			printf("\nDigite Seu Nome\n");
			gets(nome);
			printf("Digite sua Senha");
			gets(senha);
			printf("Digite Novamente a Mesma senha");
			gets(senha2);
			if(senha!=senha2){
			printf("\nsenha Nao Confere\n");
			
			}
		
		
	case 2:
		for(i=1;i<=10;i++){
			printf("teste");
		}
	}
}

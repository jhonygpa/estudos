#include<cstdio>
#include<cstdlib>
#include<windows.h>
int main(void){
	int menu,entrada,s1,s2;
	entrada:
	printf("\n\t\t::::Menu::::\n1-Cadastrar Senha\n");
	scanf("%i",&entrada);
	switch(entrada){
		case 1:
			system("cls");
			printf("Cadastre Sua Nova Senha\n");
			scanf("%i",&s1);
			
			printf("Digite Novamente A senha\n");
			scanf("%i",&s2);
			if(s1==s2){
				printf("Senha Criada");
			}else{
				printf("Senha Nao Valida");
				Sleep(2000);
				system("cls");
				goto entrada;
			}
			
	}
}

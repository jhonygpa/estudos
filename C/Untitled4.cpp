#include<cstdio>
#include<cstdlib>
int main(void){
	int i,ano,idade,nas,resu;
	printf("\nDigite Sua Idade \n");
	scanf("%i",&idade);
	printf("Digite o Ano Atual\n");
	scanf("%i",&ano);
	printf("Digite o Ano do seu Nascimento\n");
	scanf("%i",&nas);
	resu=idade+ano+nas;
		for(i=0;i<=resu;i++){
			if(i %idade==0){
				printf("[%i]-\t-",i);
			}
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
	
int opc,vot,senha=012345,entrada;
int cand1=0, cand2=0, cand3=0;
setlocale(LC_ALL,"portuguese");
menu:
printf("\n VOTAÇÃO \n");
printf("\n 1-Votar \n 2-Finalizar urna\n 3-Sair \n 4-Abrir Urna \n");
scanf("%i",&opc);

switch(opc){
	case 1:
		printf("\n VOTAR \n");
		printf("\n Escolha o seu candidato \n");
		int vot;
		scanf("%i",&vot);
		
		if(vot==99){
			cand1= cand1+1;
			printf("\n Você votou no Candidato 99 \n");
		}else{
			if(vot==90){
				cand2=cand2+1;
				printf("\n Você votou no Candidato 90 \n");
			}
		if(vot==91){
			cand3=cand3+1;
			printf("\n Você votou na Candidata 91 \n");
		}
	case 4:
		printf("\n Informe Sua senha\n");
	scanf("%i",&entrada);
	if(entrada==senha){
		printf("\n acesso confirmado\n");
		}
		else{
			printf("\n acesso blobqueado\n");		
		Sleep(5000);
		goto menu;
		break;
		}
	}
}
}

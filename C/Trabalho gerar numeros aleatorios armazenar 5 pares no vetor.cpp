#include<cstdlib>
#include<cstdio>
#include<ctime> 
int main(void){
	int i,y[4],x[99],menu;
	menu:
	printf("\n\t\t\t::::1-Gerador de Numeros Pares  ::::\n\t\t\t::::2-Gerador de Numeros Inpares::::\n");
	scanf("%i",&menu);
	system("cls");
	switch (menu){
	case 1 :
	srand((time(NULL)));
	printf("\n\t\t\t\t:::Vou gerar 100 numeros Aleatorios::: \n ");
	printf("\n\t\t\t:::Armazenar Somente 5 Numeros Pares na Ordem de Sorteio:::\n\n");
	
	for(i=0;i<=99;i++){
	x[i]=rand()%99;
	printf(" %i,",x[i]);
	if(x[i] % 2 == 0){
	y[i]=x[i];
	}else{
			i--;
		}
}
printf("\n");
for(i=0;i<=4;i++){
printf("\n No vetor %i o numero foi  [%i] \n",i,y[i]);
}
system("Pause");
break;
system("cls");

  goto menu;
  	case 2 :
	srand((time(NULL)));
	printf("\n\t\t\t\t:::Vou gerar 100 numeros Aleatorios::: \n ");
	printf("\n\t\t\t:::Armazenar Somente 5 Numeros Inpares na Ordem de Sorteio:::\n\n");
	
	for(i=0;i<=99;i++){
	x[i]=rand()%99;
	printf(" %i,",x[i]);
	if(x[i] % 2 == 1){
	y[i]=x[i];
	}else{
			i--;
		}
}
printf("\n");
for(i=0;i<=4;i++){
printf("\n No vetor %i o numero foi  [%i] \n",i,y[i]);
}
system("Pause");
system("cls");

}
  goto menu;
}

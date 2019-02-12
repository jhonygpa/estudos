#include <cstdio>
#include <cstdlib>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	int num;
	int bin[14];
	int aux;
	aqui:
	printf("Digite o número (decimal) para converter");
	scanf("%d", &num); 
	for (aux = 11; aux >= 0; aux--){ //O contador Foi auterado para 11 parea comportar o numero maior
		if(num % 2 == 0){
			bin[aux] = 0;
			num = num / 2;
			}else{
				bin[aux]=1;
				num=num /2;
			}
	}
	
	for (aux = 0; aux<= 11; aux ++){ //O contador Foi auterado para 11 parea comportar o numero maior
		printf("%i", bin[aux]);
		 }
	printf("\n");
	system("pause");
	system("cls");
	goto aqui;
	return 0;
	
}

#include<cstdio>
#include<cstdlib>
int main(void){
	int n1[10],i,resultado=0;
	for(i=0;i<=9;i++){
	
	printf("Digite %i Numeros\n",i+1);
	scanf("%i",&n1[i]);
	resultado=resultado+n1[i];
	}
	printf("[%i]",resultado);

}

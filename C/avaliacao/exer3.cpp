#include<cstdio>
#include<cstdlib>
#include<clocale>
int main(void){
	setlocale(LC_ALL,"portuguese");
	int n1[10],i,resultado=0,n2;
	for(i=0;i<=9;i++){
	
	printf("Digite %i Números\n",i+1);
	scanf("%i",&n1[i]);
	resultado=resultado+n1[i];
	if(n1[i]>n2){
		n2=n1[i];
	}
	
}
		printf("::::::A Soma dos Números é [%i] e o Número Maior é [%i]::::::",resultado,n2);

}

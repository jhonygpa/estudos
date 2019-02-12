#include <cstdio>
#include <cstdlib>
#include <cstring>

int main (){
	int i,y,val;
	char nome[30];
	
	printf("\n Digite uma palavra \n");
	gets(nome);
	val=strlen(nome);
	
	for(i=0; i<=val-1; i++){
		for(y=0; y<=i; y++){
			printf("%c",nome[y]);
		}
		printf("\n");
	}
	for(i=val-1; i>=0; i--){
		for(y=0; y<=i; y++){
			printf("%c",nome[y]);
		}
		printf("\n");
	}
}

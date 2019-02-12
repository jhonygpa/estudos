#include<cstdio>
#include<cstdlib>
#include<string.h>
int main(void){
	char palavra[50];
	int i,j,letras;
printf("\nDigite uma Palavra\n");
gets(palavra);
letras=strlen(palavra);
for(i=letras-1;i<=0;i++){
	for(j=i;j<=0;j++){
	printf(" %c ",palavra[j]);
}
printf("\n");
}

}


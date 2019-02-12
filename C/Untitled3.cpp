#include<cstdio>
#include<cstdlib>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"portuguese");
	int n[5],i,n1=0;
	for(i=1;i<=5;i++){
	printf("digite o %iº  numero\n",i);
	scanf("%i",&n[i]);
	
	if(n[i] %2==0){
		n1 = n1 + 1;
		if(n1==5){
			for(i=0;i<=4;i++){
				printf("\n %i \n",n[i]);
			}
		}
}else{
	i--;
}
}
}

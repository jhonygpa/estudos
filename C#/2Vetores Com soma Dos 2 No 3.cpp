#include<cstdlib>
#include<cstdio>
int main(void){
	int vetor1[5],vetor2[5],vetor3[5];
	int i,a;
	for (i=0;i<=4;i++){
		printf("\ndigite o %i numero\n",i+1);
		scanf("%i",&vetor1[i]);
	}
	for(i=0;i<=4;i++){
	printf("%i",vetor1[i]);
}
    for (a=0;a<=4;a++){
    	printf("\ndigite o %i numero\n",a+1);
    	scanf("%i",&vetor2[a]);
    }	for(i=0;i<=4;i++){
		printf("%i  ",vetor2[i]);
}
	for(i=0;i<=4;i++){
		vetor3[i]=vetor1[i]+vetor2[i];
		printf("\n%i + %i = %i\n",vetor1[i],vetor2[i],vetor3[i]);
	}
}

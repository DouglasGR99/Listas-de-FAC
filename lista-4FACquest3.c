/*

	QUEST�O 03: Jo�ozinho investiu Q reais em
	uma aplica��o com rendimento fixo de R% ao
	m�s. Pede-se a implementa��o de um
	programa que calcule o valor (e exiba-o)
	dispon�vel na conta de Jo�ozinho ap�s A anos
	de investimento.

*/

#include <stdio.h>

float anual(float Q, float R, int A);

void main(){
	int A;
	float Q, R;
	
	printf("Insira o valor investido:\n");
	scanf("%f",&Q);
	printf("Insira o rendimento fixo ao mes (por cento):\n");
	scanf("%f",&R);
	printf("Insira o tempo do investimento em anos:\n");
	scanf("%d",&A);
	
	printf("\nO valor final apos %d anos, com %.2f a.m. foi de RS %.2f.",A,R,anual(Q,R,A));
}

float anual(float Q, float R, int A){
	int i, M;
	float rendeu;
	
	R=(R/100);
	M=A*12;
	
	for(i=0;i<=M;i++){
		rendeu=Q*R;
		printf("\n rendeu %.2f",rendeu);
		Q=Q+rendeu;
		printf("\n Q atual %.2f \n",Q);
	}
	return Q;
}

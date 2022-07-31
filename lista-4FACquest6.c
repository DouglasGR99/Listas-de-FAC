/*
	
	QUEST�O 06: Fa�a um programa que leia um
	n�mero N inteiro, menor ou igual a 18. Se for
	maior do que 18, o programa exibir� uma
	mensagem de erro e terminar� a sua
	execu��o; caso contr�rio, dever� exibir os
	n�meros no intervalo de 1 a 99 cujos
	algarismos somem N.
	Exemplo:
	N = 12 Portanto, o programa deve exibir
	os n�meros que est�o no
	intervalo de 1 a 99, cujos
	algarismos somam 12. Ou seja:
	39, 48, 57, 66, 75, 84 e 93.

*/

#include <stdio.h>

void messenger(int num);

void main(){
	int num;
	printf("Enter a number between 1 and 18:\n");
	scanf("%d",&num);
	
	while(num>18){
		printf("Error, please enter a valid number:\n");
		scanf("%d",&num);			
	}
	messenger(num);	
}

void messenger(int num){
	int i, first, pot, sec,result;
	for(i=1;i<=99;i++){
		first=i/10;
		pot=first*10;
		sec=i-pot;
		result=first+sec;
		if(result==num){
			printf(" %d",i);
		}
	}
}

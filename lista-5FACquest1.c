/*

	QUEST�O 01:
	Dado um n�mero inteiro N, fazer um
	programa que exiba os n�meros pares
	iguais ou inferiores a N.

*/
#include <stdio.h>

int main(){
	int i,n;
	printf("Insira um numero:\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i+=2){
		printf(" %d",i);
	}
	
}

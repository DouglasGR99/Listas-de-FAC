/*

	QUESTÃO 02:
	Desenvolver um programa que calcule a
	soma dos números de 1 a N, sendo N um
	número inteiro fornecido pelo usuário.

*/

#include <stdio.h>

int main(){
	int i,j=0,n;
	printf("Insira um numero:\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		j=j+i;
	}
	printf("\nO resultado e %d",j);
}

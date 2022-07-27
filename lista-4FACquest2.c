#include <stdio.h>

/*
	LISTA
	QUESTÃO 02: Faça um programa que exiba
	todos os elementos da seguinte série, assim
	como a soma destes elementos:
	1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1

*/

void elementos(int menor, int maior);

void main(){
int menor, maior;
	printf("Digite um numero menor:\n");
	scanf("%d",&menor);
	printf("Digite um numero maior:\n");
	scanf("%d",&maior);
	elementos(menor,maior);
}

void elementos(int menor, int maior){
	int i=menor, j=maior;
	while(i<=maior && j>=menor){
		printf("%d, %d, ",i,j);
		i++;
		j--;
	}
}

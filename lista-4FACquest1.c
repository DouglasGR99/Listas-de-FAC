#include <stdio.h>
/*

	QUEST�O 01: Fa�a um programa que leia um
	n�mero inteiro positivo N e exiba todos os
	m�ltiplos de Y inferiores a N, onde N e Y s�o
	fornecidos pelo usu�rio.

*/

void exibirmult(int n, int y);

void main(){
	int n, y;
	printf("Digite um numero N:\n");
	scanf("%d",&n);
	printf("Digite um numero Y:\n");
	scanf("%d",&y);
	exibirmult(n,y);
}

void exibirmult(int n, int y){
	int i, result;
	for(i=0;i<n;i++){
		result=y*i;
		if(result<n && result!=0){
			printf("%d ",result);
		}
	}
}

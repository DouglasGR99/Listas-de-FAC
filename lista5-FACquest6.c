/*

	QUESTÃO 06:
	Criar um programa que exiba os N
	primeiros termos da seguinte série:
	1,2,8,64,1024,...

*/

#include <stdio.h>
#include <math.h>

void main(){
	int i,n;
	
	printf("\nEnter n:\n");
	scanf("%d",&n);
	printf("1");
	
	for(i=2;i<=n;i=i*2*2){
		printf(" %d",i);
	}
}

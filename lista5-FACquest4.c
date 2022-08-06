/*

	QUESTÃO 04:
	Implementar um programa que exiba os N
	primeiros termos de uma PA (Progressão
	Aritmética) com primeiro termo a1 e razão
	r.

*/
#include <stdio.h>

void main(){
	int i,a1,n,r;
	
	printf("\nEnter a1:\n");
	scanf("%d",&a1);
	printf("\nEnter n:\n");
	scanf("%d",&n);
	printf("\nEnter r:\n");
	scanf("%d",&r);
	
	for(i=a1;i<=n;i+=r){
		printf(" %d",i);
	}
}

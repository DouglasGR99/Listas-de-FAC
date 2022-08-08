/*

	QUESTÃO 07:
	Desenvolver um programa no qual o
	usuário entre com vários números inteiros
	e positivos e imprima o produto dos
	números ímpares e a soma dos números
	pares.

*/

#include <stdio.h>
void main(){
	int i,n,x,par=0,impar=1;
	
	printf("\nEnter n:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	printf("\nEnter x:\n");
	scanf("%d",&x);
	
	if(x%2==0){
		par=par+x;
		}else{
		impar=impar*x;
	}
	
	}
	printf("\nSoma dos pares:%d\nMultiplicacao dos impares:%d:\n",par,impar);
} 

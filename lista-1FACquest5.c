#include<stdio.h>
//lista 1-questao 5
	//calcular o menor numero possivel de dinheiros
void main(){
	int valor, cedulas;
	int n100, n50, n20, n10, n5, n2, n1;
	int r100, r50, r20, r10, r5, r2; 
	printf("insisira um valor a ser sacado: \n");
	scanf("%d",&valor);
	n100 = (valor / 100);
	r100 = (valor % 100);
	n50 = (r100 / 50);
	r50 = (r100 % 50);
	n20 = (r50 / 20);
	r20 = (r50 % 20);
	n10 = (r20 / 10);
	r10 = (r20 % 10);
	n5 = (r10 / 5);
	r5 = (r10 % 5);
	n2 = (r5 / 2);
	r2 = (r5 % 2);
	n1 = (r2 / 1);
	cedulas = (n100 + n50 + n20 + n10 + n5 + n2 + n1);
	printf("o numero de cedulas e %d",cedulas);	
}

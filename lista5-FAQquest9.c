/*
	
	QUESTÃO 09:
	Escrever um programa que encontre o
	quinto número maior que 1000, cuja
	divisão por 11 tenha resto 5.

*/

#include <stdio.h>

int pop(){
	int i=1000,j=0;
	
	while(i<=10000){
		if(i%11==0){
			j++;
		}
		if(j==5){
			return i;
		}
		i++;
	}
}

void main(){
	printf("\nO num e %d",pop());
}

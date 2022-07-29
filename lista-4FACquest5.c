/*

	QUESTÃO 05: Faça um programa que exiba
	na tela os 50 primeiros termos da seguinte
	série: 1, -2, 3, -4, 5, -6 ...

*/
#include <stdio.h>

int main(){
	int i,j;
	for(i=1;i<=50;i++){
		
		j=i;
		
		//operador ternario vvv
		(i%2==0)?j=j*(-1):j*1;
		printf(" %d",j);
	}
}

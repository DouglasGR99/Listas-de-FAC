#include<stdio.h>
//lista 1-questao 2
	//definir a qual grupo pertence
void main(){
	int idade;
	printf("insira sua idade: \n");
	scanf("%d",&idade);
	switch(idade){
		case 0 ... 4:
			printf("infantil a");
			break;
		case 5 ... 7:
			printf("infantil b");
			break;
		case 8 ... 10:
			printf("infantil c");
			break;
		case 11 ... 13:
			printf("juvenil a");
			break;
		case 14 ... 17:
			printf("juvenil b");
			break;
		case 18 ... 100:	
			printf("adulto");
			break;
	}
}

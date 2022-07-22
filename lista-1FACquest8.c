#include<stdio.h>
//lista 1-questao 8
	//calcular a conta do hotel
void main(){
	char nome[99];
	char apart;
	int dias;
	float consumo, diaria, subtotal, total, taxa;
	printf("insira seu nome: \n");
	scanf("%s", &nome);
	printf("\n agora por favor insira o tipo de apartamento alugado: A, B, C, D. \n");
	scanf("%s", &apart);
	printf("agora quantos dias voce passou conosco: \n");
	scanf("%d", &dias);
	printf("voce consumiu algo alem do incluso no pacote? por favor, se sim digite o valor: \n");
	scanf("%f", &consumo);
	switch(apart){
		case 'a':
			diaria = (dias * 350.00);
			break;
		case 'b':
			diaria = (dias * 275.00);
			break;
		case 'c':
			diaria = (dias * 200.00);
			break;
		case 'd':
			diaria = (dias * 150.00);
			break;
	}
	subtotal = (diaria + consumo);
	taxa = (subtotal * 0.1);
	total = (subtotal + taxa);
	printf("\n ola, %c, seu apartamento e do tipo %c.", nome, apart);
	printf(" \n o valor de suas diarias foi rs %.2f \n seu consumo interno foi de %.2f \n o subtotal e de rs %.2f \n e o total e rs %.2f", diaria, consumo, subtotal, total);	
}

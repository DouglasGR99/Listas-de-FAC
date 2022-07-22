#include <stdio.h>   
int main(){
//	lista 1 FAC
/*
	//questao 1
	//fazer o valor do carro a partir do preco de fabrica
	int custofab;
	float custofinal;
	printf("Insira o valor de fabrica do veiculo: \n");
	scanf("%d", &custofab);
	custofinal = (custofab+(0.2*custofab));
	printf("\n o valor e %.2f reais",custofinal);
}

	//questao 2
	//definir a qual grupo pertence
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

	//questao 3
	//calcular peso ideal
	float peso, altura;
	int genero;
	printf("inserir genero:\n homem: 1 \n mulher: 2 \n");
	scanf("%d",&genero);
	printf("agora insira sua altura em metros: \n");
	scanf("%f",&altura);
	switch(genero){
		case 1:
			(peso = ((72.7 * altura)-58));
			break;
		case 2:
			(peso = ((62.1 * altura)-44.7));
			break;
	}
	printf("seu peso ideal e %.2f quilos",peso);
}

	//questao 4
	//banco da credito de acordo com o saldo
	int saldo;
	float cred;
	printf("insira seu saldo medio: \n");
	scanf("%d",&saldo);
	switch(saldo){
		case 0 ... 999:
			cred = 0.00;
			break;
		case 1000 ... 1499:
			cred = (saldo * 0.2);
			break;
		case 1500 ... 2499:
			cred = (saldo * 0.3);
			break;
		case 2500 ... 99999:
			cred = (saldo * 0.4);
			break;
	}
	printf("seu credito bonus e %.2f",cred);
}

	//questao 5
	//calcular o menor numero possivel de dinheiros
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

	//questao 6
	//determinar ordem de uma data
	int dia, mes, data;
	printf("insira um dia e um mes: \n");
	scanf("%d%d",&dia,&mes);
	switch(mes){
		 case 1:
		 	data = (dia);
		 	break;
		case 2:
			data = (dia + 31);
			break;
		case 3:
			data = (dia + 59);
			break;
		case 4:
			data = (dia + 90);
			break;
		case 5:
			data = (dia + 120);
			break;
		case 6:
			data = (dia + 151);
			break;
		case 7:
			data = (dia + 181);
			break;
		case 8:
			data = (dia + 212);
			break;
		case 9:
			data = (dia + 243);
			break;
		case 10:
			data = (dia + 273);
			break;
		case 11:
			data = (dia + 304);
			break;
		case 12:
			data = (dia + 334);
			break;
	}
	 printf("%d dia do ano.",data);
}

	//questao 7
	// determinar salario semanal com base nas horas
	int horas;
	float salario;
	printf("diga quantas horas voce trabalha numa semana: \n");
	scanf("%d",&horas);
	if (horas <= 40){
		salario = (horas * 25.00);
		}else{
			salario = ((horas - 40) * 12.50) + 1000.00;
	}
	printf("seu salario e rs %.2f",salario);
}
*/
	//questao 8
	//calcular a conta do hotel
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

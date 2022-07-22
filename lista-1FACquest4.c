#include<stdio.h>
//lista 1-questao 4
	//banco da credito de acordo com o saldo
void main(){
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

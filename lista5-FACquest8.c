/*

	QUESTÃO 08:
	Fazer um programa que auxilie o orgão
	regulador no cálculo do total de recursos
	arrecadados com a aplicação de multas de
	trânsito.
	O programa deve ler as seguintes
	informações para cada motorista:
	- O número da carteira de motorista;
	- Número de multas;
	- Valor de cada uma das multas.
	Deve ser exibido o valor da dívida de cada
	motorista e ao final da leitura o total de
	recursos arrecadados (somatório de todas
	as multas). O programa também deverá
	apresentar o número da carteira do
	motorista que obteve o maior número de
	multas.

*/
#include <stdio.h>

int main(){
	int i,j,pes,cart,cartmais,mult,maismult=0;
	float valor,totalp,total=0;
	
	printf("\nNum de pessoas:\n");
	scanf("%d",&pes);
	
	for(i=1;i<=pes;i++){
		printf("\n\nNum carteira:\n");
		scanf("%d",&cart);
		printf("\nNum multas:\n");
		scanf("%d",&mult);
		totalp=0;
		
		for(j=1;j<=mult;j++){
			printf("\nValor multa:\n");
			scanf("%f",&valor);
			totalp=totalp+valor;
			total=total+valor;
		}
		
		if(mult>maismult){
			maismult=mult;
			cartmais=cart; 
		}
		
		printf("\n%.2f pessoal",totalp);
	}
	printf("\n\nArrecadados: %.2f",total);
	printf("Carteira %d obteve maior num de multas",cartmais);
}


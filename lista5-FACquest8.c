/*

	QUEST�O 08:
	Fazer um programa que auxilie o org�o
	regulador no c�lculo do total de recursos
	arrecadados com a aplica��o de multas de
	tr�nsito.
	O programa deve ler as seguintes
	informa��es para cada motorista:
	- O n�mero da carteira de motorista;
	- N�mero de multas;
	- Valor de cada uma das multas.
	Deve ser exibido o valor da d�vida de cada
	motorista e ao final da leitura o total de
	recursos arrecadados (somat�rio de todas
	as multas). O programa tamb�m dever�
	apresentar o n�mero da carteira do
	motorista que obteve o maior n�mero de
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


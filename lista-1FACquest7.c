#include<stdio.h>
//lista 1-questao 7
	// determinar salario semanal com base nas horas
void main(){
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

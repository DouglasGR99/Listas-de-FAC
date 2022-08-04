/*

	QUEST�O 08: Em uma empresa deseja-se
	fazer um levantamento sobre algumas
	informa��es dos seus 250 funcion�rios. Cada
	funcion�rio dever� responder um
	question�rio ao qual informar� os seguintes
	dados: matr�cula, g�nero, idade, sal�rio e
	tempo (em anos) de trabalho na empresa. A
	execu��o do programa deve exibir os
	seguintes itens:
	a) Quantidade de funcion�rios que
	ingressaram na empresa com menos
	de 21 anos;
	b) Quantidade de funcion�rios do
	g�nero feminino;
	c) M�dia salarial dos homens;
	d) Matr�cula dos funcion�rios mais
	antigo e mais novo.

*/
#include <stdio.h>

#define FUNC 3

void main(){
	int i,matricula,gen,idade,sal,anos;
	int masc=0,fem=0,jovem=0,Mnovo=9999,matMnovo,Mvelho=0,matMvelho,salario=0,mediaSal;
	
	for(i=0;i<FUNC;i++){
		printf("\n\nInsira sua matricula:\n");
		scanf("%d",&matricula);
		printf("\nInsira sua idade:\n");
		scanf("%d",&idade);
		printf("\nInsira seu genero(masc 1/fem 2):\n");
		scanf("%d",&gen);
		printf("\nInsira seu salario:\n");
		scanf("%d",&sal);
		printf("\nHa quantos anos trabalha conosco:\n");
		scanf("%d",&anos);
		
		
		(gen<2)?masc++:fem++;
		
		//salario para media
		if(gen<2){
			salario=salario+sal;
		}
		
		//ingressantes jovens
		if(idade<21){
			jovem++;
		}
		
		if(idade<Mnovo){
			Mnovo=idade;
			//matricula do mais novo
			matMnovo=matricula;
		}
		
		if(idade>Mvelho){
			Mvelho=idade;
			//matricula do mais velho
			matMvelho=matricula;
		}
	}
	
	mediaSal=salario/masc;
	
	printf("\n%d funcionarios menores de 21",jovem);
	printf("\n%d mulheres",fem);
	printf("\nMedia salarial dos homens: %d reais",mediaSal);
	printf("\n%d matricula do mais novo",matMnovo);
	printf("\n%d matricula do mais velho",matMvelho);
}

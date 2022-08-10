/*
	
	QUESTÃO 10:
	Foi feita uma pesquisa entre os habitantes
	de uma região e coletados os dados de
	altura e gênero das pessoas. Faça um
	programa que leia as informações de 50
	pessoas e informe:
	- a maior e a menor alturas
	encontradas;
	- a média de altura das mulheres;
	- a média de altura da população;
	- o percentual de homens na
	população.

*/

#include <stdio.h>
#include <stdlib.h> //necessario para rand() e srand()
#include <time.h>  //necessario para time()

#define POP 10

void main(){
	int i,gen,mul=0;
	float alt,hom=0,porcent,altMul=0,medAltMul,somAlt=0,medAltPop;
	
//Fazendo novos numeros aleatorios
	srand (time(NULL));
	
	printf(" \nGenero 0:Mulher\n Genero 1:Homem\n");
	
//trabalhando pessoa por pessoa
	for(i=1;i<=POP;i++){
		gen=rand()%2;
		alt=rand()%180/100.0+0.5;
		printf("\n Pessoa %d: Genero %d, altura %.2f m.",i,gen,alt);
		
//somatorio das alturas
		somAlt+=alt;
		
//calculando mulheres, somatorio de alturas e homens
		if(gen==0){
			mul++;
			altMul+=alt;
			}else{
				hom++;
			}
	}

//calculando media das alturas e porcentagem de homens	
	medAltMul=altMul/mul;
	medAltPop=somAlt/POP;
	porcent=(hom/POP)*100;
	
	printf("\n\n Media de altura: %.2fm",medAltPop);
	printf("\n M.de altura fem: %.2fm",medAltMul);
	printf("\n Porcent. mascul: %.2f",porcent);
	
}



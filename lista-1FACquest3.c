#include<stdio.h>
//lista 1-questao 3
	//calcular peso ideal
void main(){
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

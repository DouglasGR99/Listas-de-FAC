#include <stdio.h>

/*

	QUESTÃO 04: Faça um programa que leia
	300 números reais. Ao final, devem ser
	exibidas as seguintes informações:
	a) A quantidade de valores negativos
	digitados;
	b) A média dos valores positivos.

*/

#define TAM 300

void separador(float conj[], int tamanho, int *neg, float *media);
void exibirVet(float vetor[], int tamanho);

void main(){
	int i, neg;
	float conj [TAM], media, valor;
	
	printf("digite %d valores:\n", TAM);
	for(i=0;i<TAM;i++){
		scanf("%f",&valor);
		conj[i]=valor;
	}
	separador(conj,TAM,&neg,&media);
	printf("Os valores do vetor sao: ");
	exibirVet(conj,TAM);
	printf("\nO vetor tem %d numeros negativos e a media dos positivos e %.2f",neg,media);
}


void separador(float conj[], int tamanho, int *neg, float *media){
	int i, contneg=0, contpos=0;
	float somatpos=0;
	for(i=0;i<tamanho;i++){
		if(conj[i]<0){
			contneg++;
		}else{
				contpos++;
				somatpos=somatpos+conj[i];
			}
	}
	*media=somatpos/contpos;
	*neg=contneg;
}

void exibirVet(float vetor[], int tamanho){
	int i;
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++){
		printf ("  %.2f ", vetor[i]);
	}
}

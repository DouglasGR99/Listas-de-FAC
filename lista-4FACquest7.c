/*

QUESTÃO 07: Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça um
programa que forneça:
a) Número de pessoas que gostaram do
produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que gênero
o produto teve uma melhor
aceitação.

*/
#include <stdio.h>

void product(int people,int *liked,int *disliked,int *bestA);

void main(){
	int people,liked,disliked,bestA;
	printf("\nPlease enter the number of people:\n");
	scanf("%d",&people);
	
	product(people,&liked,&disliked,&bestA);
	printf("People that liked the product: %d\n",liked);
	printf("People that disliked the product: %d\n",disliked);
	if(bestA=1){
		printf("The product has the best approval among men");
	}else{
		if(bestA=2){
			printf("The product has the best approval among women");	
		}else{
			printf("The product was successful among both men and women");
		}
		
	}
	
}

void product(int people,int *liked,int *disliked,int *bestA){
	int i,gender,accept, Maccept=0, Faccept=0, l=0, d=0, b;
	
	for(i=1;i<=people;i++){
		printf("\nPlease enter the number 1 if you identify as male or 2 as female:\n");
		scanf("%d",&gender);
		printf("\nEnter the number 1 if you liked the product or 2 if you didn't:\n:\n");
		scanf("%d",&accept);
		
		if(accept==2){
			d++;
		}else{
			if(gender==1){
				Maccept++;
				l++;
			}else{
				Faccept++;
				l++;
			}
		}
		
	}
	if(Maccept>Faccept){
		b=1;
	}else{
		if(Maccept<Faccept){
			b=2;	
		}else{
			b=3;
		}
		
	}
	
	printf("\nMen acception: %d\nWomen acception: %d\n",Maccept,Faccept);
	*liked=l;
	*disliked=d;
	*bestA=b;
}


#include<stdio.h>
//lista 1-questao 1
	//fazer o valor do carro a partir do preco de fabrica
void main(){

	int custofab;
	float custofinal;
	printf("Insira o valor de fabrica do veiculo: \n");
	scanf("%d", &custofab);
	custofinal = (custofab+(0.2*custofab));
	printf("\n o valor e %.2f reais",custofinal);
}

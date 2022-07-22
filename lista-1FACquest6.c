#include<stdio.h>
//lista 1-questao 6
	//determinar ordem de uma data
void main(){
	int dia, mes, data;
	printf("insira um dia e um mes: \n");
	scanf("%d%d",&dia,&mes);
	switch(mes){
		 case 1:
		 	data = (dia);
		 	break;
		case 2:
			data = (dia + 31);
			break;
		case 3:
			data = (dia + 59);
			break;
		case 4:
			data = (dia + 90);
			break;
		case 5:
			data = (dia + 120);
			break;
		case 6:
			data = (dia + 151);
			break;
		case 7:
			data = (dia + 181);
			break;
		case 8:
			data = (dia + 212);
			break;
		case 9:
			data = (dia + 243);
			break;
		case 10:
			data = (dia + 273);
			break;
		case 11:
			data = (dia + 304);
			break;
		case 12:
			data = (dia + 334);
			break;
	}
	 printf("%d dia do ano.",data);	
}

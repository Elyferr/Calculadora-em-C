//Desenvolva um programa que promete ao usuário realizar operações aritméticas básicas, como adição, subtração, multiplicação e divisão

#include<stdio.h> 
#include<locale.h>
int main (){ 
	setlocale(LC_ALL, "portuguese"); 
	char o[5]; 
	double num1, num2, r; 
	
	printf("Digite dois números que serão usados na operação: "); 
	scanf("%lf %lf", &num1, &num2); 
	
	printf("Digite o caractere que represente o tipo da operação: "); 
	scanf("%s", &o); 
	printf("%0.1lf %s %0.1lf", num1, o, num2); 
	
	if(o[0] =='+'){
		r = num1 + num2;
	}
	else if(o[0] =='-'){
		r = num1 - num2;
}
	else if(o[0] =='*'){
		r = num1 * num2;
	}
	else if (o[0]=='/'){
		r = num1 / num2;
	}
	else{
		printf("Caractere inválido");
	}
	
	printf("= %0.1lf", r);
	
	return 0;
}

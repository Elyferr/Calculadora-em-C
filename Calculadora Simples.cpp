//Desenvolva um programa que promete ao usu�rio realizar opera��es aritm�ticas b�sicas, como adi��o, subtra��o, multiplica��o e divis�o

#include<stdio.h> 
#include<locale.h>
int main (){ 
	setlocale(LC_ALL, "portuguese"); 
	char o[5]; 
	double num1, num2, r; 
	
	printf("Digite dois n�meros que ser�o usados na opera��o: "); 
	scanf("%lf %lf", &num1, &num2); 
	
	printf("Digite o caractere que represente o tipo da opera��o: "); 
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
		printf("Caractere inv�lido");
	}
	
	printf("= %0.1lf", r);
	
	return 0;
}

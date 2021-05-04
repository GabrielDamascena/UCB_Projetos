#include <stdio.h> //Biblioteca que tr�s a fun��o printf
#include <math.h> //Biblioteca que tr�s as fun��es matem�ticas

int main(){ //inicio do algoritimo: fun��o main

	double a, b, c, x1, x2, delta; // Declara��o das variaveis
	
	printf("Digite o valor de a: \n"); 	//Imprime pedindo o valor de A
	scanf("%lf", &a);                 	//ler o valor de A e guarda na mem�ria!
	
	printf("Digite o valor de b: \n");	//Imprime pedindo o valor de B
	scanf("%lf", &b);                 	//ler o valor de B e guarda na mem�ria!
	
	printf("Digite o valor de c: \n");	//Imprime pedindo o valor de C
	scanf("%lf", &c);                 	//ler o valor de C e guarda na mem�ria!
	
	delta = pow(b,2) - 4*a*c; // calcula o Delta do baskara
	
	if(a == 0 or delta < 0){ //Condi��o para cauculo
		printf("Impossivel efetuar cauculo! \n");
	}else{
		x1 = (-(b) + sqrt(delta)) / (2*a); // Cauculo do X1
		x2 = (-(b) - sqrt(delta)) / (2*a); // Cauculo do X2
		
		printf("\nX1 = %lf \t X2 = %lf", x1, x2); //Imprime os resultados na tela!
	}
	
	
	
	
return (0);	// retorno da fun��o
} // fim do algoritimo

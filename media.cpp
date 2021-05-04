/*
	Leia quatro números (N1, N2, N3, N4) e o nome do aluno e o sexo, correspondente às 
	quatro notas de um aluno. Calcule a média simples. Para cada uma destas notas, 
	mostre esta média acompanhada pela mensagem "Media: ". Se esta média for maior 
	ou igual a 7.0, imprima a mensagem "'nome do aluno', 'sexo, aprovado.". 
	Se a média calculada for inferior, imprima a mensagem "'nome do aluno' reprovado.".
	
	A impressão da média deve ser feita com apenas 1 cada decimal. 
*/

#include<stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		double n1, n2, n3, n4, media; //%lf
		char sexo; //%c
		char nomeAluno[20]; //%s
		
		printf("Digite seu nome: \n");
		scanf("%s", &nomeAluno);
		
		printf("\nDigite seu sexo: M = Masculino F = Feminino \n");
		scanf("%s", &sexo);
		
		printf("\nOlá %s, Digite a primeira nota: \n", nomeAluno);
		scanf("%lf", &n1);
		
		printf("Agora digite a segunda nota: \n");
		scanf("%lf", &n2);
		
		printf("Digite a terceira nota: \n");
		scanf("%lf", &n3);
		
		printf("Informe a quarta nota: \n");
		scanf("%lf", &n4);
		
		media = (n1+n2+n3+n4) /4;
		
		printf("\nMedia: %1.lf", media);
		
		if(media >= 7){
			printf("\n%s, %c, Aprovado com media: %1.lf", nomeAluno, sexo, media);
		}else{
			printf("\n%s, %c, Reprovado com media: %1.lf", nomeAluno, sexo, media);
		}
	
	
	return 0;
}

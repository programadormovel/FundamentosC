#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
//	//1 - iniciando em C
//	printf("Hello World!");
	
//	//2 - estrutura da função printf()
//	int retorno = printf("Olá Mundo!!! \n");
//	printf("%d",retorno); // tamanho da string
//	retorno = printf("Aulas iniciais de C \n");
//	printf("%d",retorno); // tamanho da string
	
//	// 3 - tipo inteiro truncando decimal
//	int idade = 0;
//	idade = 37.2;
//	printf("%u  \n", idade);
	
//	// 4 - estouro de capacidade de armazenamento
//	unsigned char j = 255;
//	j = j + 1;
//	printf("%u \n", j);	
	
//	// 5 - excedendo limite de capacidade de armazenamento
//	char t = 117;
//	t = t + 10;
//	printf("%u \n", t);

//	// 6 - tipo diferente atribuído
//	char j = 1000;
	
//	// 7 - atribuição indireta
//	char j;
//	j = 1000;
	
//	// 8 - curiosidade, com += roda, mas estoura também
//	char j = 0;
//  	j += 1000;
//	printf("%u \n", j);
	
//	// 9 - verificando capacidade de armazenamento dos tipos de dados em C
//	printf("Tamanho de char: %lu bytes\n", sizeof(char));
//	printf("Tamanho de int: %lu bytes\n", sizeof(int));
//	printf("Tamanho de short: %lu bytes\n", sizeof(short));
//	printf("Tamanho de long: %lu bytes\n", sizeof(long));
//	printf("Tamanho de float: %lu bytes\n", sizeof(float));
//	printf("Tamanho de double: %lu bytes\n", 
//	sizeof(double));
//	printf("Tamanho de long double: %lu bytes\n", 
//	sizeof(long double));

//	// 10 - constantes
//	const int IDADE = 46;
//	// IDADE = 47;
//	printf("%u \n", IDADE);
//	#define PESO 34
//	// PESO = 56;	
//	printf("%u \n", PESO);

//	// operações matemáticas
//	// 11 - incremento e decremento
//	int a = 2;
//	int b;
//	b = a++;
//	printf("%u \n", a);
//	printf("%u \n", b);
//	b = ++a;
//	printf("%u \n", a);
//	printf("%u \n", b);
	
//	//	// 12 - incremento e decremento
//	int a = 2;
//	int b = 0;
//	b += a;
//	printf("%u \n", a);
//	printf("%u \n", b);
//	b =+ a;
//	printf("%u \n", a);
//	printf("%u \n", b);
	
//	// 13 - Operador ternário
//	int condicao = 0;
//	condicao==1 ? printf("%s \n", "verdade") : printf("%s \n", "falsidade");
	
//	// 14 - obter o tamanho da variável
//	int idade = 37;
//	printf("%ld\n", sizeof(idade));
//	printf("%ld", sizeof(int));
			
//	// 15 - precedência dos operadores
//	double nota1 = 5.5;
//	double nota2 = 6.5;
//	double nota3 = 9.0;
//	double media = nota1 + nota2 + nota3 / 3;
//	printf("%g \n", media);
//	media = (nota1 + nota2 + nota3) / 3;
//	printf("%g \n", media);
	
//	// 16 - Condicionais
//	int a = 10;
//	// linha
//	if(a==10) printf("%s \n", "verdade"); else printf("%s \n", "falsidade");
//	// sem chaves
//	if(a==10) 
//		printf("%s \n", "verdade"); 
//	else 
//		printf("%s \n", "falsidade");	
//	// com chaves
//	if(a==10) {
//		printf("%s \n", "verdade"); 
//	}
//	else {
//		printf("%s \n", "falsidade");
//	}	
//	// encadeado
//	if(a==10) {
//		printf("%s \n", "verdade"); 
//	}
//	else if(a==20){
//		printf("%s \n", "outra opção"); 
//	}
//	else {
//		printf("%s \n", "falsidade");
//	}
//	// aninhado
//	if(a==10) {
//		printf("%s \n", "verdade"); 
//		 if(a==20){
//			printf("%s \n", "outra opção"); 
//		} else {
//			printf("%s \n", "falsidade");
//		}
//	} else {
//		printf("%s \n", "falsidade");
//	}
		
//	// 17 - Seletor de opções
//	int a = 1;
//
//	switch (a) {
//	  case 0:
//	    printf("%s \n", "opção 0"); 
//	    break;
//	  case 1:
//	    printf("%s \n", "opção 1"); 
//	    break;
//	  case 2:
//	    printf("%s \n", "opção 2"); 
//	    break;
//	}
	
//	// 18 - Seletor de opções com opção padrão
//	int a = 1;
//
//	switch (a) {
//	case 0:
//		printf("%s \n", "opção 0"); 
//		break;
//	case 1:
//		printf("%s \n", "opção 1"); 
//		break;
//	case 2:
//		printf("%s \n", "opção 2"); 
//		break;
//	default:
//		printf("%s \n", "opção padrão"); 
//		break;
//	}

//	// 19 - Laço para faça
//	for (int i = 0; i < 10; i++) {
//	  printf("%u \n", i); 
//	}
//	system("pause");
//	// <=
//	for (int i = 0; i <= 10; i++) {
//	  printf("%u \n", i); 
//	}
//	system("pause");
//	// >
//	for (int i = 10; i > 0; i--) {
//	  printf("%u \n", i); 
//	}
//	system("pause");
//	// 
//	for (int i = 0; i < 1000; i = i + 30) {
//	  printf("%u \n", i); 
//	}
//	system("pause");
	
//	// 20 - laço enquanto
//	int i = 0;
//
//	while (i < 10) {
//	  printf("%u \n", i); 
//	
//	  i++;
//	}
	
//	// 21 - laço faça enquanto
//	int i = 0;
//
//	do {
//	  printf("%u \n", i); 
//	
//	  i++;
//	} while (i < 10);
	
//	// 22 - laço enquanto
//	int condicao = 1;
//
//	while (condicao == 1) {
//	  printf("%u \n", condicao); 
//	
//	  printf("Deseja continuar o laço de repetição? (Digite 1 para continuar): ");
//	  scanf("%u", &condicao); // entrada de dados
//	}
//	printf("fim do laço enquanto com condição!");
	
//	// 23 - enquanto com interrupção forçada do programa
//	int i = 0;
//	while (1) {
//	  printf("%u \n", i); 
//	
//	  i++;
//	  if (i == 10) break;
//	}
		
//	// 24 - laço de repetição com interrupção forçada
//	int x = 10;
//	for (int i = 0; i <= 10; i++) {
//	  
//	  printf("%u \n", i); 
//	  	
//	  if (i == 4 && x == 10) {
//	    break;
//	  }
//	}
	
//	// 25 - vetores
//	int numero[5] = { 1, 2, 3, 4, 5 };
//	for(int x = 0; x < 5; x++){
//		printf("%u \n", numero[x]); 
//	}
	//
//	const int TAM = 5;
//	int vetor[TAM];
//	vetor[0]=5;
//	vetor[1]=4;
//	vetor[2]=5;
//	vetor[3]=4;
//	vetor[4]=5;
//	for(int x = 0; x < TAM; x++){
//		printf("%u \n", vetor[x]); 
//	}
//	// 
//	const int TAM = 5;
//	int vetor[TAM];
//	// laço de entrada
//	for(int x = 0; x < TAM; x++){	
//		printf("\n Entre com um valor na posição %u  : ", x);
//		scanf("%u", &vetor[x]); // entrada de dados 
//	}
//	// laço de saída
//	for(int x = 0; x < TAM; x++){
//		printf("\n\n %u \t", vetor[x]); 
//	}
	
//	// 26 - Vetor de caracter
//	char nome[8] = { 'A', 'd', 'r', 'i', 'a', 'n', 'o', '\0' };
//	printf("%s", nome);
//	
//	// caracter de finalização omitido
//	char nome[8] = { 'A', 'd', 'r', 'i', 'a', 'n', 'o' };
//	printf("%s", nome);
	
	// ponteiros
	int idade = 46;
	printf("%p \n", &idade); // endereço da variável idade na memória
	
	// guardando endereço da variável idade
	int *endereco = &idade;
	printf("%u \n", *endereco); // apontando para o valor da variável idade
	
	//
	*endereco = 47;
	printf("%u \n", *endereco);
	printf("%p \n", &idade);
	printf("%u \n", idade);
	
	
			
	//system("pause");
	//return 0;
}
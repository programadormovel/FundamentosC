#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

extern int tomate = 0;

// módulo procedimento
void imprimir(char texto[]){
	printf("\n %s", texto);
	// limpando memória
	for(int x=0; x<strlen(texto); x++){
		texto[x] = ' ';
	}
}

// módulo função
int somar(int x, int y){
	return x + y;
}

void troca1(int a, int b){
	printf("\n TROCA 1: ");
	int temp;
	temp = a;
	a = b;
	b = temp;
}


void troca2(int *a, int *b){
	printf("\n TROCA 2: ");
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void troca3(int a, int b){
	printf("\n TROCA 3: ");
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("\n Com variáveis, saída dentro do procedimento: \n a=%d \n b=%d", a, b);	
}


void troca4(int *a, int *b){
	printf("\n TROCA 4: ");
	printf("\n Com variáveis, saída dos endereços de a e b ANTES: \n a=%p \n b=%p", &a, &b);
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("\n Com variáveis, saída dos endereços de a e b DEPOIS:\n a=%p \n b=%p", &a, &b);
	printf("\n Com ponteiros, saída dentro do procedimento: \n a=%p \n b=%p", a, b);	
}


	// 37 - TAD - Tipo Abstrato de Dados
	typedef struct{
		int numero;
		double saldo;
	}contabancaria;
	
	void inicia(contabancaria* conta, int numero, double saldo){
		(*conta).numero = numero;
		(*conta).saldo = saldo;
	}
	
	void deposito(contabancaria* conta, double valor){
		(*conta).saldo += valor;
	}
	
	void saque(contabancaria* conta, double valor){
		(*conta).saldo -= valor;
	}
	
	void imprime(contabancaria conta){
		printf("Número: %d\n", conta.numero);
		printf("Saldo: %10.2f\n", conta.saldo);
	}
	
int main(int argc, char *argv[]) {
	
//	//1 - iniciando em C
//	printf("Hello World!");
//	
//	//2 - estrutura da função printf()
//	int retorno = printf("Olá Mundo!!! \n");
//	printf("%d",retorno); // tamanho da string
//	retorno = printf("Aulas iniciais de C \n");
//	printf("%d",retorno); // tamanho da string
//	
//	// 3 - tipo inteiro truncando decimal
//	int idade = 0;
//	idade = 37.2;
//	printf("%u  \n", idade);
//	
//	// 4 - estouro de capacidade de armazenamento
//	unsigned char j = 255;
//	j = j + 1;
//	printf("%u \n", j);	
//	
//	// 5 - excedendo limite de capacidade de armazenamento
//	char t = 117;
//	t = t + 10;
//	printf("%u \n", t);
//
//	// 6 - tipo diferente atribuído
//	char j = 1000;
//	
//	// 7 - atribuição indireta
//	char j;
//	j = 1000;
//	
//	// 8 - curiosidade, com += roda, mas estoura também
//	char j = 0;
//  	j += 1000;
//	printf("%u \n", j);
//	
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
//
//	// 10 - constantes
//	const int IDADE = 46;
//	// IDADE = 47;
//	printf("%u \n", IDADE);
//	#define PESO 34
//	// PESO = 56;	
//	printf("%u \n", PESO);
//
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
//	
//	//	// 12 - incremento e decremento
//	int a = 2;
//	int b = 0;
//	b += a;
//	printf("%u \n", a);
//	printf("%u \n", b);
//	b =+ a;
//	printf("%u \n", a);
//	printf("%u \n", b);
//	
//	// 13 - Operador ternário
//	int condicao = 0;
//	condicao==1 ? printf("%s \n", "verdade") : printf("%s \n", "falsidade");
//	
//	// 14 - obter o tamanho da variável
//	int idade = 37;
//	printf("%ld\n", sizeof(idade));
//	printf("%ld", sizeof(int));
//			
//	// 15 - precedência dos operadores
//	double nota1 = 5.5;
//	double nota2 = 6.5;
//	double nota3 = 9.0;
//	double media = nota1 + nota2 + nota3 / 3;
//	printf("%g \n", media);
//	media = (nota1 + nota2 + nota3) / 3;
//	printf("%g \n", media);
//	
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
//		
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
//	
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
//
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
//	
//	// 20 - laço enquanto
//	int i = 0;
//
//	while (i < 10) {
//	  printf("%u \n", i); 
//	
//	  i++;
//	}
//	
//	// 21 - laço faça enquanto
//	int i = 0;
//
//	do {
//	  printf("%u \n", i); 
//	
//	  i++;
//	} while (i < 10);
//	
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
//	
//	// 23 - enquanto com interrupção forçada do programa
//	int i = 0;
//	while (1) {
//	  printf("%u \n", i); 
//	
//	  i++;
//	  if (i == 10) break;
//	}
//		
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
//	
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
//	
//	// 26 - Vetor de caracter
//	char nome[8] = { 'A', 'd', 'r', 'i', 'a', 'n', 'o', '\0' };
//	printf("%s", nome);
//	
//	// caracter de finalização omitido
//	char nome[8] = { 'A', 'd', 'r', 'i', 'a', 'n', 'o' };
//	printf("%s", nome);
//	
//	// 27 - ponteiros
//	int idade = 46;
//	printf("%p \n", &idade); // endereço da variável idade na memória
//	
//	// guardando endereço da variável idade
//	int *endereco = &idade;
//	printf("%u \n", *endereco); // apontando para o valor da variável idade
//	
//	//
//	*endereco = 47;
//	printf("%u \n", *endereco);  // valor do endereço apontado, no caso variável idade
//	printf("%p \n", &idade);	// endereço da variável idade
//	printf("%u \n", idade);		// valor da variável idade
//	printf("%p \n", endereco);	// endereço da variável idade, pois o ponteiro só armazena o endereço da variável recebida na atribuição.
//	
//	// 28 - Operador vírgula
//	int itens = 0;
//	int numero = 0;
//	itens = (numero = 3, ++numero, 2*numero);
//	printf("O valor da variável número é %d, da variável itens é %d", numero, itens);
	

//	// 29 - SizeOf - Encontrar o tamanho da capacidade de armazenamento da variável
//	int itens = 0;
//	int numero = 0;
//	itens = (numero = 3, ++numero, 2*numero);
//	printf("O valor da variável número é %d, da variável itens é %d \n", numero, itens);
//	int tamanho = sizeof(itens);
//	printf("%u bytes \n", tamanho);
//	// estourando a capacidade da variável
//	itens = 9999;
//	printf("O valor da variável itens é %d \n", itens);
//	itens = 1410065407;
//	printf("O valor da variável itens é %d \n", itens);
//	itens = 2147483647;
//	printf("O valor da variável itens é %d \n", itens);  // limite da variável do tipo int de 4 bytes
//	itens = 2147483649; 
//	printf("O valor da variável itens é %d \n", itens); // estoura e volta para o início da contagem, no caso -2147483648	
	
	// 30 - tipos de variáveis
//	// 30.1 automática - local e não persiste valor
//	int contador = 1;
//	auto int numero = 0;
//	while(contador <= 10){
//		numero += contador;
//		printf("\n A variável que armazena esta valor %d existe apenas dentro do laço.", numero);
//		contador++;
//	}
//	printf("\n A variável que armazena esta valor %d existe apenas dentro do laço.", numero);
	
//	// 30.2 estática - local e persiste valor
//	int contador = 1;
//	static int numero = 0;
//	while(contador <= 10){
//		numero += contador;
//		printf("\n A variável que armazena esta valor %d existe apenas dentro do laço.", numero);
//		contador++;
//	}
//	// descomente a linha abaixo para causar um erro no exercício 30.1
//	printf("\n A variável que armazena esta valor %d existe apenas dentro do laço.", numero);
	
//	//	// 30.3 externa - global
//	int contador = 10;
//	while(contador >= 1){
//		tomate += contador;
//		printf("\n %u A variável que armazena este valor %d existe apenas dentro do laço.", contador, tomate);
//		contador--;
//	}
//	// descomente a linha abaixo para causar um erro no exercício 30.1
//	printf("\n A variável que armazena este valor %d existe apenas dentro do laço.", tomate);

//	// 31 - tipos de constantes
//	// declarada
//	const int pi = 3.14;
//	// definida
//	#define NOTAMAXIMA 10
//	// enumerada
//	enum CORES {
//		vermelho, amarelo, azul, laranja, verde, violeta
//	} cor;
//	
//	// saídas das contantes
//	printf("\n %5.2f", pi);
//	printf("\n %d", NOTAMAXIMA);
//	printf("\n %d", vermelho);
//	printf("\n %d", laranja);
//	printf("\n %d", cor);
//	
//	printf("\n %s", "VALORES DA CONSTANTE ENUMERADA STATUS:");
//	enum STATUS{FALSE, TRUE, FAIL=0, OK, NOT_RUN=-1} estado; 
//	printf("\n %d", estado);
//	printf("\n %d", FAIL);
//	printf("\n %d", OK);
//	printf("\n %d", NOT_RUN);
//	printf("\n %d", FALSE);
//	printf("\n %d", TRUE);
	
//	// 32 - Chamadas dos módulos - sub-programas
//	// procedimento
//	char enviandoTexto[7] = {'A', 'u', 'l', 'a', ' ', 'C'};
//	imprimir(enviandoTexto);
//	
//	// função
//	int resultado = somar(5, 8);
//	printf("\n %d", resultado);
	
//	// 33.1 - troca de valores
//	int a = 6, b = 2;
//	troca1(a, b);
//	printf("\n a=%d \n b=%d", a, b);
//	system("pause");
//	
//	// 33.2 - troca de valores com ponteiros
//	a = 6, b = 2;
//	troca2(&a, &b);
//	printf("\n Com ponteiros: \n a=%d \n b=%d", a, b);	
//	system("pause");
//	
//	// 33.3 - troca de valores
//	a = 6, b = 2;
//	troca3(a, b);
//	
//	printf("\n a=%d \n b=%d", a, b);
//	printf("\n Com variáveis, saída dos endereços de a e b: \n a=%p \n b=%p", &a, &b);
//	system("pause");
//	
//	// 33.4 - troca de valores com ponteiros
//	a = 6, b = 2;
//	troca4(&a, &b);
//	printf("\n Com ponteiros: \n a=%d \n b=%d", a, b);
//	printf("\n Com ponteiros, saída dos endereços de a e b: \n a=%p \n b=%p", a, b);
//	system("pause");
	
//	// 34 - alocação dinâmica - malloc
//	char *nome;
//	nome = (char *) malloc(10 * sizeof(char));
//	free(nome);
//	
//    printf("Entre com um texto qualquer: ");
//    fgets(nome, 10, stdin);
// 
// 	printf("\n %s \n", nome);   
//    printf("\n Quantidade de caracteres armazenados: %d \n", strlen(nome));
//    printf("\n Endereço do ponteiro *nome: %p \n", &nome);
//    printf("\n Endereço do valor armazenado pelo ponteiro *nome: %p \n", nome);
//	
//	free(nome);
	
//	// 35 - alocação dinâmica - calloc
//	char *nome;
//	nome = (char *) calloc(10, sizeof(char));
//	free(nome);
//	
//    printf("Entre com um texto qualquer: ");
//    fgets(nome, 10, stdin);
// 
// 	printf("\n %s \n", nome);   
//    printf("\n Quantidade de caracteres armazenados: %d \n", strlen(nome));
//    printf("\n Endereço do ponteiro *nome: %p \n", &nome);
//    printf("\n Endereço do valor armazenado pelo ponteiro *nome: %p \n", nome);
//	
//	free(nome);
	
	// 36 - alocação dinâmica de memória
////	int x = 9999999999;
////	printf("%u", x);
//
//	int n = 10;
//	int *nova = (int*) malloc(n*sizeof(int));
//	
//	// laço de entrada
//	for(int x=0; x < n; x++){
//	  nova[x]=1400000001;
//	}
//	// laço de saída
//	for(int x=0; x<n; x++)
//	  printf("%d", nova[x]);
//
//	// continuação do exercício acima
//	printf("\n");
//	printf("\n");
//	n = 20;
//	nova = (int *) realloc(nova, n*sizeof(int));
//	
//	// laço de entrada
//	for(int x=0; x < n; x++){
//	  nova[x]=1400000001;
//	}
//	// laço de saída
//	for(int x=0; x<n; x++)
//	  printf("%d", nova[x]);
//	
//	printf("\n");

	// 37 - Utilizando um TAD - Tipo Abstrato de Dados
//	contabancaria conta1;
//	contabancaria conta2;
//	contabancaria conta3;
//	
//	inicia(&conta1, 12345, 100.00);
//	inicia(&conta2, 12346, 1000.00);
//	inicia(&conta3, 12347, 1000000.00);
//	
//	system("cls");
//	
//	printf("\n Antes da movimentação: \n");
//	imprime(conta1);
//	imprime(conta2);
//	
//	deposito(&conta1, 50.00);
//	saque(&conta2, 130.00);
//	
//	printf("\n Depois da movimentação: \n");
//	imprime(conta1);
//	imprime(conta2);

	// 38 - limpando memória utilizada - continuação do 32
	// procedimento
	char enviandoTexto[7] = {'A', 'u', 'l', 'a', ' ', 'C'};
	imprimir(enviandoTexto);
	
	enviandoTexto[0] = 'O';
	enviandoTexto[1] = 'i';
	imprimir(enviandoTexto);
	
		
	return 0;
}
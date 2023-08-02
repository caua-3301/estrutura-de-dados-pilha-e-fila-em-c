//ESTRUTURA DE DADOS TIPO FILA EM C
//By: Cauã Pires Developer

#include <stdio.h>
#include <stdlib.h>

/*Criando nodo (ou nó/registro) em que será armazenado cada número informado da minha fila,
 o mesmo possui uma variável tipo inteiro e um ponteiro que aponta para um outro nodo*/
typedef struct nodo{
	
	struct nodo *proximo;
	int numero;
	
}Nodo;

//Criando a estrutura que servirá de norte para definir o início da minha fila
typedef struct{
	
	Nodo *inicio;
	
}Fila;

/*Criando um procedimento (subprograma) para criar um ponteiro que apontará para minha fila.
Fila = nodo que representa o inicio da fila. fila(minúsculo) = ponteiro para a Fila (maiúsculo)*/
Fila * criando_fila(){
	
	Fila *fila = (Fila*)malloc(sizeof(Fila));
	fila -> inicio = NULL;
	return fila;
	
}

//Procedimento que terá como objetivo adicionar um novo número a fila
//num = novo numero que será adicionado
void adicionar (Fila *fila, int num){
	Nodo *novo = (Nodo*)malloc(sizeof(Nodo));
	novo -> numero = num;
	novo -> proximo = NULL;
	if(fila -> inicio == NULL){
		fila -> inicio = novo;
	}
	else{
		Nodo *aux = fila -> inicio;
		while (aux -> proximo != NULL){
			aux = aux -> proximo;
		}
		aux -> proximo = novo;
	}
}

//Função (outro tipo de subprograma) que será responsável pela remoção e limpeza de memória de um dado, alé de retornar esse dado para o usuário
int remover (Fila *fila){
	Nodo *aux = fila -> inicio;
	int valor = aux -> numero;
	fila -> inicio = aux -> proximo;
	free(aux);
	return valor;
}

//Função que retorna quantos elementos possuo na fila
int numero_elementos(Fila *fila){
	Nodo *aux = fila -> inicio;
	int contador = 0;
	while (aux != NULL){
		contador++;
		aux = aux -> proximo;
	}
	return contador;
}

//Função que me retorna 1(true) se a fila estiver vazia e 0(false) caso não esteja
int esta_vazia (Fila *fila){
	if (fila -> inicio == NULL){
		return 1;
	}
	return 0;
}

void main(){
	
	int num, quant_numeros;
//Criando fila
	Fila *fila = criando_fila();
	
	printf ("Informe um numero: (o 0 encerra a leitura)\n");
	scanf ("%d", &num);
	
//Adicionando numeros
	while (num != 0){
		adicionar (fila, num);
		printf ("Informe um numero: (o 0 encerra a leitura)\n");
		scanf ("%d", &num);
	}

//Perguntando quantos numeros serão exibidos, e após teste, exibindo-os	
	printf ("A lista possui %d elementos, quatos numeros voce deseja remover/exibir: \n", numero_elementos(fila));
	scanf ("%d", &quant_numeros);
	if (quant_numeros > numero_elementos(fila)){
		printf ("Numero maior que a fila, programa encerrado");
	}
	else{
		while (quant_numeros > 0){
		printf ("%d\n", remover(fila));
		quant_numeros--;
		}
	}
	
	getch();
}



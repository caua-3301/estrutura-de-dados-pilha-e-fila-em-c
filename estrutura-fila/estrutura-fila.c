//ESTRUTURA DE DADOS TIPO FILA EM C
//By: Cau� Pires Developer

#include <stdio.h>
#include <stdlib.h>

/*Criando nodo (ou n�/registro) em que ser� armazenado cada n�mero informado da minha fila,
 o mesmo possui uma vari�vel tipo inteiro e um ponteiro que aponta para um outro nodo*/
typedef struct nodo{
	
	struct nodo *proximo;
	int numero;
	
}Nodo;

//Criando a estrutura que servir� de norte para definir o in�cio da minha fila
typedef struct{
	
	Nodo *inicio;
	
}Fila;

/*Criando um procedimento (subprograma) para criar um ponteiro que apontar� para minha fila.
Fila = nodo que representa o inicio da fila. fila(min�sculo) = ponteiro para a Fila (mai�sculo)*/
Fila * criando_fila(){
	
	Fila *fila = (Fila*)malloc(sizeof(Fila));
	fila -> inicio = NULL;
	return fila;
	
}

//Procedimento que ter� como objetivo adicionar um novo n�mero a fila
//num = novo numero que ser� adicionado
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

//Fun��o (outro tipo de subprograma) que ser� respons�vel pela remo��o e limpeza de mem�ria de um dado, al� de retornar esse dado para o usu�rio
int remover (Fila *fila){
	Nodo *aux = fila -> inicio;
	int valor = aux -> numero;
	fila -> inicio = aux -> proximo;
	free(aux);
	return valor;
}

//Fun��o que retorna quantos elementos possuo na fila
int numero_elementos(Fila *fila){
	Nodo *aux = fila -> inicio;
	int contador = 0;
	while (aux != NULL){
		contador++;
		aux = aux -> proximo;
	}
	return contador;
}

//Fun��o que me retorna 1(true) se a fila estiver vazia e 0(false) caso n�o esteja
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

//Perguntando quantos numeros ser�o exibidos, e ap�s teste, exibindo-os	
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



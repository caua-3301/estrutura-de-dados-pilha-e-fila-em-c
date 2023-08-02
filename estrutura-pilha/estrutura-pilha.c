//ESTRUTURA DE DADOS TIPO PILHA EM C
//By: Cauã Pires Developer

#include <stdio.h>
#include <stdlib.h>

//Definindo a estrutura do resgistro (nodo) que estará na minha pilha//

typedef struct nodo{
	
	int num;
	struct nodo * proximo;
	
}Nodo;

//Definindo o topo da minha pilha//

typedef struct{
	
	Nodo *topo;
	
}Pilha;

//Criando a pilha sem si, definindo a mesma e reforçando o topo//

Pilha * criando(){
	
	Pilha * pilha = (Pilha *)malloc(sizeof(Pilha));
	pilha -> topo = NULL;
	return pilha;
}

//Criando uma função para adicionar registros a minha pilha//

void push(Pilha * pilha, int n){
	Nodo *novo = (Nodo*) malloc(sizeof(Nodo));
	novo -> num = n;
	novo -> proximo = pilha -> topo;
	pilha -> topo = novo;
}

//Removendo um valor de dentro da minha pilha, e excluindo o registro do mesmo//

int pop(Pilha * pilha){
	Nodo * aux = pilha -> topo;
	int valor = aux -> num;
	pilha -> topo = aux -> proximo;
	free(aux);
	return valor;
}

//Verificando se minha pilha (meu registro atual, do topo da pilha) está vazio//

int vazio(Pilha * pilha){
	if (pilha -> topo == NULL){
		return 1;
	}
	return 0;
}

//Implementando tudo no meu main//
void main(){
	int n;
	Pilha * pilha = criando();
	
	printf ("Informe um numero: (o 0 ebcerra a leitura)\n");
	scanf ("%d", &n);
	
	while (n != 0){
		push(pilha, n);
		printf ("Informe um numero: (o 0 ebcerra a leitura)\n");
		scanf ("%d", &n);
	}
	
	printf ("Valores informados: \n");
	while (!vazio(pilha)){
		printf ("%d \n", pop(pilha));
	}
	
	getch();
	
}





#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha p;

void inicializar() {
    p.topo = NULL;
}


int verificarVazia() {
    if (p.topo == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void push(int dado) {
    //aloca memoria para um novo noh da pilha
    No *novo_no = malloc(sizeof(No));
    //se foi alocado memoria, adiciona o novoNo no topo da pilha
    if (novo_no != NULL) {
        //guarda o elemento a inserir na pilha no membro dado do novoNo
        novo_no->dado = dado;
        //o elemento anterior do novoNo serah o elemento que estah no topo
        novo_no->no_anterior = p.topo;
        //Atualiza o topo da pilha
        p.topo = novo_no;
    } else {
        //senao informa o usuario que nao ha mais memoria
        printf("Nao ha mais memoria disponivel!");
    }
}

void imprimir() {
    //verificar se a pilha nao estah vazia
    if(!verificarVazia()) {
        //Declara uma variavel ponteiro auxiliar para percorrer os nohs da pilha
        No *aux = p.topo;
        //comeca a percorrer a partir do topo, enquanto nao chegar no fim,
        do {
            //processa e vai para o noh anterior
            //imprimir o dado do noh apontado por aux
            printf("\n%d", aux->dado);
            aux = aux->no_anterior;
        } while (aux != NULL);
    } else {
        //se estiver vazia, informa o usuario
        printf("\nA pilha estah vazia!");
    }
 
}

int pop () {
    //verificar se a pilha não estah vazia
    if(!verificarVazia()) {
        ///aux aponta para o noh do topo
        No *aux = p.topo;
        //dado ira guardar o elemento do topo da pilha
        int dado_removido = aux->dado;
        //atualizar o topo da pilha
        p.topo = aux->no_anterior;
        printf("Numero removido: %d", dado_removido);
        //libera a memoria ocupada pelo noh removido
        free(aux);
        //retorna o valor do noh removido
        return dado_removido;
    } else {
        //se a fila estiver vazia, informa o usuario
        printf("\nA pilha estah vazia!");
        return 0;
    }
}


//Funcoes para testes automatizados
void emitirResultado(int resultado) {
	if(resultado) 
		printf("\nGREEN: Passou!");
	else printf("\nRED: Nao passou!");
}

void testar1_VaziaPilha(){
	printf("\nTeste 1: Este teste irah verificar a pilha vazia");
	inicializar();
	if(verificarVazia()) {
		emitirResultado(1);
	} else emitirResultado(0);
}

void testar3_RemoverPilha(){
	int removido = 0;
	printf("\nTeste 3: Este teste irah tentar remover de uma pilha vazia");
	inicializar();
	removido = pop();
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

void testar4_RemoverPilha(int quant){
	int removido = 0, i, numeros[quant];
	printf("\nTeste 4: Este teste irah inserir %d elemento na pilha e remove-lo, deixando a pilha vazia", quant);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
	
	inicializar();
	for(i = 0; i < quant; i++) {
		push(numeros[i]);
	}
	
	for(i = 0; i < quant; i++) {
		removido = pop();
		if(removido != numeros[quant-i-1]) {
			emitirResultado(0);
			return;
		}
	}
	//verifica se a pilha ficou vazia
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

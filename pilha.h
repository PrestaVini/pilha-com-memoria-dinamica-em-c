typedef struct _no {
    int dado;
    struct _no *no_anterior;
} No;

typedef struct _pilha {
    No *topo;
} Pilha;


void inicializar();
int verificarVazia();
int verificarCheia();
void push(int dado);
void imprimir();
int pop();

//Funcoes para testes automatizados
void testar1_VaziaPilha();
void testar3_RemoverPilha();
void testar4_RemoverPilha(int quant);

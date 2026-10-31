# Pilha com Memória Dinâmica em C

## Enunciado da Atividade

A tarefa consiste em escrever as funções do arquivo `pilha.c` para implementar uma pilha de números inteiros utilizando memória dinâmica.

O programa deve permitir inicializar a pilha, verificar se ela está vazia, inserir números, imprimir os elementos e remover o item do topo. As operações devem seguir a estratégia LIFO.

O código também possui rotinas automatizadas para verificar o funcionamento da implementação.

## O que faz

O programa implementa uma pilha de números inteiros utilizando nós alocados dinamicamente.

Cada nó é representado pela estrutura `No` e possui:

- Um número inteiro;
- Um ponteiro para o nó anterior.

A estrutura `Pilha` mantém um ponteiro para o nó que está no topo.

A pilha segue a estratégia **LIFO (Last In, First Out)**: o último número inserido é o primeiro a ser removido.

Por exemplo, ao inserir os números 10, 20 e 30, a ordem da pilha será:

```text
Topo -> 30 -> 20 -> 10
```

A primeira remoção retornará o número 30.

## Funções implementadas

| Função | Responsabilidade |
|---|---|
| `inicializar` | Define o topo como `NULL`, deixando a pilha vazia. |
| `verificarVazia` | Verifica se o topo da pilha é `NULL`. |
| `push` | Aloca um novo nó com `malloc` e o adiciona ao topo. |
| `imprimir` | Percorre os nós do topo até o último e exibe seus valores. |
| `pop` | Remove o nó do topo, retorna seu valor e libera a memória com `free`. |

## Menu do programa

| Opção | Ação |
|---|---|
| 1 | Inicializar a pilha. |
| 2 | Inserir um número no topo. |
| 3 | Remover o número do topo. |
| 4 | Imprimir os elementos da pilha. |
| 5 | Executar os testes automatizados. |
| 8 | Encerrar o programa. |

## Tecnologias usadas

- Linguagem C;
- Ponteiros;
- Structs;
- Memória dinâmica;
- Alocação com `malloc`;
- Liberação de memória com `free`;
- Estrutura de dados pilha;
- Estratégia LIFO;
- Arquivos de cabeçalho `.h`;
- OnlineGDB para compilação e execução.

## Arquivos do projeto

| Arquivo | Responsabilidade |
|---|---|
| `main.c` | Contém o menu e chama as operações e os testes. |
| `pilha.h` | Define as estruturas `No` e `Pilha` e declara as funções. |
| `pilha.c` | Implementa as operações da pilha e as rotinas de teste. |

## Como executar o código

### Pelo OnlineGDB

1. Acesse [OnlineGDB](https://www.onlinegdb.com/).
2. Selecione a linguagem **C**.
3. Coloque o conteúdo de `main.c` no arquivo principal.
4. Adicione os arquivos `pilha.c` e `pilha.h` ao mesmo projeto.
5. Mantenha os três arquivos com seus nomes originais.
6. Compile e execute o programa.
7. Utilize as opções do menu para manipular a pilha.
8. Escolha a opção **5** para executar os testes automatizados.
9. Escolha a opção **8** para encerrar.

### Pelo terminal com GCC

Na pasta que contém os três arquivos, compile com:

```bash
gcc -std=c99 main.c pilha.c -o pilha_dinamica
```

No Linux ou macOS, execute:

```bash
./pilha_dinamica
```

No PowerShell do Windows, execute:

```powershell
.\pilha_dinamica.exe
```

## Resultado dos testes

O projeto foi compilado com GCC no padrão C99 e executado utilizando a opção **5** do menu.

Resultado:

- **8 testes GREEN**;
- **0 testes RED**.

Os testes verificam a inicialização, a remoção em uma pilha vazia e a ordem LIFO para pilhas com diferentes quantidades de elementos.

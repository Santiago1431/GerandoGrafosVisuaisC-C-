#include <stdio.h>
#include "grafo.h"
#include "visualizacao.h"

int main() {
    // Criar o grafo com 5 vértices
    Grafo* grafo = criarGrafo(5);

    // Adicionando as arestas
    adicionarAresta(grafo, 0, 1);
    adicionarAresta(grafo, 0, 4);
    adicionarAresta(grafo, 1, 2);
    adicionarAresta(grafo, 1, 3);
    adicionarAresta(grafo, 1, 4);
    adicionarAresta(grafo, 2, 3);
    adicionarAresta(grafo, 3, 4);

    // Imprimir no terminal (opcional)
    imprimirGrafo(grafo);

    // Gerar o arquivo DOT para visualização
    gerarArquivoDOT();

    // Liberar memória
    liberarGrafo(grafo);

    return 0;
}

#ifndef GRAFO_H
#define GRAFO_H

typedef struct No {
    int vertice;
    struct No* prox;
} No;

typedef struct {
    int numVertices;
    No** listaAdj;
} Grafo;

// Funções do grafo
Grafo* criarGrafo(int vertices);
void adicionarAresta(Grafo* grafo, int origem, int destino);
void imprimirGrafo(Grafo* grafo);
void liberarGrafo(Grafo* grafo);

#endif

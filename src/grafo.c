#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

Grafo* criarGrafo(int vertices) {
    Grafo* grafo = (Grafo*)malloc(sizeof(Grafo));
    grafo->numVertices = vertices;
    grafo->listaAdj = (No**)malloc(vertices * sizeof(No*));

    for (int i = 0; i < vertices; i++) {
        grafo->listaAdj[i] = NULL;
    }

    return grafo;
}

void adicionarAresta(Grafo* grafo, int origem, int destino) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->vertice = destino;
    novoNo->prox = grafo->listaAdj[origem];
    grafo->listaAdj[origem] = novoNo;

    // Grafo não direcionado
    novoNo = (No*)malloc(sizeof(No));
    novoNo->vertice = origem;
    novoNo->prox = grafo->listaAdj[destino];
    grafo->listaAdj[destino] = novoNo;
}

void imprimirGrafo(Grafo* grafo) {
    for (int i = 0; i < grafo->numVertices; i++) {
        No* temp = grafo->listaAdj[i];
        printf("V%d -> ", i);
        while (temp) {
            printf("V%d ", temp->vertice);
            temp = temp->prox;
        }
        printf("\n");
    }
}

void liberarGrafo(Grafo* grafo) {
    for (int i = 0; i < grafo->numVertices; i++) {
        No* atual = grafo->listaAdj[i];
        while (atual) {
            No* temp = atual;
            atual = atual->prox;
            free(temp);
        }
    }
    free(grafo->listaAdj);
    free(grafo);
}

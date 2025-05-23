#include "visualizacao.h"
#include <iostream>
#include <fstream>

void gerarArquivoDOT() {
    std::ofstream arquivo("grafo.dot");

    if (!arquivo.is_open()) {
        std::cerr << "Erro ao criar o arquivo DOT.\n";
        return;
    }

    // Início do grafo (grafo não direcionado)
    arquivo << "graph G {\n";
    arquivo << "  node [shape=circle, style=filled, color=lightblue];\n";

    // Aqui você define manualmente as arestas
    arquivo << "  0 -- 1;\n";
    arquivo << "  0 -- 4;\n";
    arquivo << "  1 -- 2;\n";
    arquivo << "  1 -- 3;\n";
    arquivo << "  1 -- 4;\n";
    arquivo << "  2 -- 3;\n";
    arquivo << "  3 -- 4;\n";

    arquivo << "}\n";

    arquivo.close();
    std::cout << "Arquivo grafo.dot gerado com sucesso!\n";
}

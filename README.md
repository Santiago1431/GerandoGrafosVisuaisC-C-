# 🚀 GerandoGrafosVisuaisC-C++

Este projeto gera um grafo visual em **.png**, utilizando **C** para a criação da estrutura do grafo em formato DOT e **C++** para processar e gerar a imagem do grafo.

---

## 📜 Descrição

- ✅ A geração da estrutura do grafo (arquivo `.dot`) é feita em **C**.
- ✅ A conversão do arquivo `.dot` em uma imagem `.png` é feita em **C++**, utilizando integração com a ferramenta externa **Graphviz (`dot`)**.
- ✅ A compilação e automação são feitas via **Makefile**, funcionando no **Windows (via MSYS2 ou Git Bash)** e **Linux**.

---

## 🗂️ Estrutura de Diretórios
```
GerandoGrafosVisuaisC-C++
│
├── src/
│    ├── grafo.c            # Código C que gera o arquivo DOT
│    ├── grafo.h            # Header do grafo
│    ├── visualizacao.cpp   # Código C++ que chama o DOT para gerar PNG
│    ├── visualizacao.h     # Header da visualização
│    └── main.c             # Função principal
│
├── build/                 # Arquivos compilados (.exe ou executável)
│
├── Makefile               # Script de compilação e geração da imagem
│
├── grafo.dot              # Arquivo DOT gerado (grafo em texto)
├── grafo.png              # Imagem do grafo gerada
│
└── README.md              # Este arquivo

```

---

## 🔧 Pré-requisitos

- ✅ **Compilador GCC e G++**
- ✅ **Make** instalado
- ✅ **Graphviz** instalado (para gerar o PNG)

### 👉 Instalar no **MSYS2 (Windows recomendado)**:

```bash
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-graphviz make

sudo apt update
sudo apt install build-essential graphviz
```

## ⚙️ Como executar
1️⃣ Clone ou baixe este repositório.

2️⃣ No terminal (MSYS2 ou Linux), vá até a pasta do projeto:
```bash
cd GerandoGrafosVisuaisC-C++

```
3️⃣ Compile e gere o grafo:
```bash
make

```

- Isso irá:

  - Compilar os arquivos .c e .cpp

  - Gerar o executável em /build

  - Executar o programa, que cria grafo.dot

  - Gerar grafo.png a partir do arquivo DOT

4️⃣ Veja a imagem do grafo gerada:
```bash
xdg-open grafo.png   # (Linux)

```

ou

```bash
start grafo.png      # (Windows via Git Bash ou cmd)

```

## 🔄 Como alterar o grafo
Abra o arquivo src/grafo.c.

Edite a função main() com as conexões que deseja.
Exemplo básico:
```bash
int main() {
    // Criar o grafo com 5 v�rtices
    Grafo* grafo = criarGrafo(5);

    // Adicionando as arestas
    adicionarAresta(grafo, 0, 1); #Altere aqui
    adicionarAresta(grafo, 0, 4); #Altere aqui
    adicionarAresta(grafo, 1, 2); #Altere aqui
    adicionarAresta(grafo, 1, 3); #Altere aqui
    adicionarAresta(grafo, 1, 4); #Altere aqui
    adicionarAresta(grafo, 2, 3); #Altere aqui
    adicionarAresta(grafo, 3, 4); #Altere aqui

    // Imprimir no terminal (opcional)
    imprimirGrafo(grafo);

    // Gerar o arquivo DOT para visualiza��o
    gerarArquivoDOT();

    // Liberar mem�ria
    liberarGrafo(grafo);

    return 0;
}


```


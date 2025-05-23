# Compiladores
CC = gcc
CXX = g++

# Flags de compilação
CFLAGS = -Wall -I./src
CXXFLAGS = -Wall -I./src

# Arquivos objeto
OBJ_C = src/grafo.o src/main.o
OBJ_CPP = src/visualizacao.o

# Nome do executável
EXEC = build/programa

# Regra principal
all: $(EXEC) gerar_imagem

# Linkagem
$(EXEC): $(OBJ_C) $(OBJ_CPP)
	$(CXX) -o $@ $(OBJ_C) $(OBJ_CPP)

# Compilar arquivos .c
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compilar arquivos .cpp
src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Executa o programa e gera o grafo PNG
gerar_imagem: $(EXEC)
	./$(EXEC)
	dot -Tpng grafo.dot -o grafo.png
	@echo "Imagem do grafo gerada: grafo.png"

# Limpa arquivos gerados
clean:
	rm -f src/*.o $(EXEC) grafo.dot grafo.png

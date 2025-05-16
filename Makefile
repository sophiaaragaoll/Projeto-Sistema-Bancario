# Nome do executável
	EXEC = projeto

# Compilador
	CXX = g++

# Flags de compilação
	CXXFLAGS = -Wall -std=c++17

# Arquivos-fonte
	SRCS = main.cpp cliente.cpp contabancaria.cpp

# Arquivos-objeto
	OBJS = $(SRCS:.cpp=.o)

# Regra principal
all: $(EXEC)

# Como construir o executável
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

# Limpar arquivos gerados
clean:
	rm -f $(OBJS) $(EXEC)

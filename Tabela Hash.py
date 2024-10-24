class TabelaHash:
    def __init__ (self, tamanho = 10):
        # Inicializar hash com um tamanho especifico
        self.tamanho = tamanho
        self.tabela = []
        
        for i in range (tamanho):
            self.tabela.append([])
        # Equivale a self.tabela =[[], [], [], []]
    
    def funcao_hash(self, chave):
        # Função hash simples que retorna o índice da tabela para a chave
        return hash(chave) % self.tamanho
        
    def inserir(self, chave, nome, idade, telefone):
        # Insere um par chave-valor na tabela hash
        indice = self.funcao_hash(chave)
        Lista = self.tabela[indice]
        
        # Verificar se a chave já existe na lista de colisão e atualizar valor
        for i, (c, v) in enumerate(Lista):
            if c == chave:
                Lista[i] = (chave, (nome, idade, telefone)) # Atualiza o valor se a chave já existe
                return
            
                print(Lista)

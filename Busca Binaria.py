def busca_binaria(lista, chave):
  
  esquerda , direita = 0, len(lista)
  
  while chave <= direita:
    meio = (esquerda + direita) // 2
    
    if chave == lista[meio]:
      return meio
  
    elif chave > lista[meio]:
      esquerda = meio + 1
  
    else:
      direita = meio - 1
      
    return -1

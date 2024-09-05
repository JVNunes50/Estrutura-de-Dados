def insertion_sort(lista):
  
  i = 1
  while i < len(lista):
    chave = lista[i]
    j = i - 1

    while j >= 0 and chave < lista[j]:
      lista[j + 1] = lista[j]
      j -= 1
      
    lista[j + 1] = chave
    i += 1
    
  return lista

# j = posição na lista
# chave = valor do número
def main():
  lista = [9,8,22,10,80,55]
  inverter = insertion_sort(lista)
  print(f'{inverter}')
main()

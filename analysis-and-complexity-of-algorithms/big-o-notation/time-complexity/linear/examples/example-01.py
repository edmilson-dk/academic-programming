array = [1, 2, 3, 22, 4, 5, 6]

def existsItem(item):
    for v in array:
        if item == v:
          return True
    return False

print(existsItem(6))

# O(n)

"""
  No pior caso, este algoritmo irá executar N vezes, porque no pior caso o "if" irá
  ser executado N vezes, onde N é o comprimento total da matriz, onde (N * k + k), onde (N * k)
  corresponde à execução do "if" e (k) a instrução de retorno da função.
""'
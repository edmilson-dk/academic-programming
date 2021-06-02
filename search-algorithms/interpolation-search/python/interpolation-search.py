def interpolationSearch(vector, startIndex, endIndex, wanted):
  validate =  (
    startIndex <= endIndex 
    and wanted >= vector[startIndex]
    and wanted <= vector[endIndex])

  if validate:
      position = startIndex + (
        round((endIndex - startIndex) / (vector[endIndex] - vector[startIndex]))
        * (wanted - vector[startIndex])
      )

      if vector[position] == wanted: return position

      if vector[position] < wanted: 
          return interpolationSearch(vector, position+1, endIndex, wanted)
      elif vector[position] > wanted:
          return interpolationSearch(vector, startIndex, position-1, wanted)

  return -1

vector = [1, 2, 3, 4, 5, 6, 7, 8]
endIndex = len(vector)-1
x = 6

index = interpolationSearch(vector, 0, endIndex, x)

if index != -1:
    print(f"Elemento encontrado na posição: {index}")
else: 
    print("Elemento não encontrado :(")
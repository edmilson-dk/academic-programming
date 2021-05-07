const array = [6, 1, 2, 3, 4]; // 1 instrução - atribuição de valor
const currentArray = [1, 2, 3, 4, 5, 6]; // 1 instrução - atribuição de valor
const M = array[0]; // 2 instruções - atribuição e acesso a valor no array

for (let i = 0; i < currentArray.length; i++) { // 2 instruções - atribuição e comparação de valores
  if (array[i] >= M) { // 2 instruções internas - incremento de "i" e comparação de valores
    M = array[i]; 
  }
}

// f(n) = 6 + 2n - onde 6 são as instruções executadas no começo do loop e 2n são as 2 instruções no final de cada 
// interação do loop vezes (N)

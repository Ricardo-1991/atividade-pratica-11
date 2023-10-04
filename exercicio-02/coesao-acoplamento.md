## Coesão:
Uma das formas para se alcançar a coesão, é criando funções que realizam tarefas específicas e bem definidas.
No caso da função maxmin(), ela faz parte de um módulo maior, com a tarefa específica de obter o maior e o menor número dentro do vetor de inteiros.

## Acoplamento:

Acoplamento refere-se ao quão dependente é as funções e módulo de todo um sistema. Acoplamento excessivo é uma má prática, pois pode tornar o código mais difícil de manter e menos flexível. Pode-se reduzir o acoplamento minimizando as dependências entre funções, usando passagem de parâmetro apropriada e evitando o uso de variáveis globais. No caso da função maxmin(), é apenas chamada quando houver a necessidade de obter o número máximo e o número mínimo de um vetor de inteiros, com passagem de parâmetro de variáveis e vetor auando for o caso de utiliza-la.
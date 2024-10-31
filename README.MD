# README.md

## Descrição do Programa

Este programa em C++ permite ao usuário inserir e validar um número positivo de elementos e, em seguida, ordená-los utilizando um dos três algoritmos de ordenação: Insertion Sort, Bubble Sort ou Selection Sort. O algoritmo a ser utilizado é escolhido com base na quantidade de elementos fornecidos:

- **Até 20 elementos**: Insertion Sort (mais eficiente para listas pequenas)
- **Entre 21 e 30 elementos**: Bubble Sort (simples, mas menos eficiente em listas grandes)
- **Mais de 30 elementos**: Selection Sort (adequado para listas maiores)

## Funcionalidades

- **Validação da entrada**: O programa solicita que o usuário insira um número positivo e continua pedindo até que uma entrada válida seja fornecida.
- **Exibição das listas**: Após a ordenação, o programa exibe a lista original e a lista ordenada.

## Algoritmos de Ordenação

1. **Insertion Sort**: Insere novos elementos na posição correta na parte já ordenada do vetor.
2. **Bubble Sort**: Compara elementos adjacentes e os troca até que todo o vetor esteja ordenado. Pode ser lento para listas grandes.
3. **Selection Sort**: Divide o vetor em duas partes, selecionando o menor elemento da parte não ordenada e movendo-o para a parte ordenada.

## Instruções para Uso

1. Compile o código em um ambiente que suporte C++.
2. Execute o programa.
3. Insira um número positivo que represente a quantidade de elementos que deseja ordenar.
4. Insira os elementos a serem ordenados.
5. O programa exibirá a lista original e a lista ordenada.

## Exemplo de Uso

```
Digite o número de elementos: 5
Digite os elementos:
3
1
4
2
5
Lista original: [3, 1, 4, 2, 5]
Lista ordenada: [1, 2, 3, 4, 5]
```

## Requisitos

- Compilador C++ (g++, clang++, etc.)
- Sistema operacional compatível com a linguagem C++

## Contribuições

Contribuições são bem-vindas! Se você deseja aprimorar o programa, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto é de domínio público. Sinta-se à vontade para usar, modificar e distribuir este código como desejar.
# Implementação: Casamento de Strings com Autômatos Finitos
## Introcução
Os algoritmos foram implementada a partir da Linguagem de Programação C, utilizando a IDE Code::Blocks, tendo como parcela na aprovação da disciplina de Teoria da Computação do Curso de Ciências da Computação, na Universidade Estadual do Norte do Paraná (UENP).

As funções implementadas no trabalho, são Prefixo(StartsWith); Sufixo(EndsWith) e Subpalavra(Contains), utilizando o conceito de Autômatos Finitos e as operações fechadas nas linguagens regulares como a concatenação e união.

## Funções
* StartsWith - vai receber uma fita como parâmetro e um prefixo de uma palavra. Assim, vai verificar se os caracteres do prefixo são iguais. Caso sejam, irá retornar True, caso contrário, false.
* EndsWith - Caso os caracteres forem iguais, irá ser incrementado um contador e decrementado um auxiliar que irá percorrer a fita. Assim, se o contator for do tamanho do sufixo, o programa retornará True, caso contrário retorna False.
* Contains - vai receber uma fita como parâmetro e uma Subpalavra de uma palavra, informada pelo usuário. Após isso, ia comparar os caracteres entre a fita e a subpalavra.Caso todas as letras forem iguais, a Subpalavra está contida na Palavra e retornará True, caso contrário retornará False.

## Funcionamento
O usuário deverá escolher uma opção no menu,  em seguida, informar a fita. Após isso, o algoritmo irá retornar o resultado, que será True para verdadeiro e False para falso. 

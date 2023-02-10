# João Lucas Pinto Vasconcelos
Este repositório foi criado com intuito de resolver alguns problemas e explicá-los, para ter a oportunidade de participar do processo seletivo de estagiário na Polícia Federal para trabalhar no Inteligeo - Sistema Integrado de Informações Geoespaciais.

## Introdução
Todos os problemas resolvidos, foram encontrados na página da [OBI](https://olimpiada.ic.unicamp.br/pratique/pu/), como descrito na vaga no [Linkedin](https://www.linkedin.com/feed/update/urn:li:activity:7028742707166519296/?utm_source=share&utm_medium=member_ios), optei por resolver 3 problemas, cada um de uma fase da olimpíada do ano de 2021.

## [Problema 1 - Baralho](https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/baralho/)
Neste primeiro problema eu tentei realizá-lo utilizando fundamentalmente logica, apesar de não ser um programa eficiente ele utiliza os recursos mais básicos ao se aprender qualquer linguagem, principalmente a linguagem C, linguagem utilizada em todos os problemas.

### Passo a Passo

#### Passo 1
Primeiramente eu crio um array de 13(representando cada carta do baralho) inteiros para cada naipe e a variável de entrada a qual recebe uma string contendo até 156 caracteres, porem eu optei por alocar o tamanho de até 157 caracteres, para não ter riscos com o \n ao final de toda string. Após definir as Variáveis eu preenchi todas casas dos arrays de cada naipe com o número 1 e então eu leio a entrada de caracteres.

#### Passo 2
Após ler todos os caracteres eu crio um laço com a variável i começando na posição 0 e ao final do laço ele incrementando 3 posições, para elar sempre esteja no início de cada "carta" como descrito no problema, dentro do laço crio 2 variáveis a x e a y, com elas representando respectivamente i+1 e i+2, a partir daqui eu separo as cartas que são maiores que 9 das menores ou iguais, utilizando a posição i dentro da string como referência, pois se i=1 a carta é maior que 9.

#### Passo 3 
Ao separar as menores ou iguais de 9 das maiores eu seleciono qual naipe aquela carta representa, verificando a posição y dentro da string e comparo com todos os caracteres na ordem explicitada no problema, caso encontre o naipe da carta eu pego o número dentro da string menos 1, para representar a posição do número dentro do array de inteiros, explicando melhor o número 1 antes adicionado em cada casa do array de inteiro era para representar a presença a ausência ou o excesso de uma determinada carta de um determinado naipe, portanto quando o número está em 0 representa que essa carta tem dentro do baralho. Essa ultima parte vai ser muito importante para o passo final.

#### Passo 4
Entao eu basicamente repito o processo quando o i é igual a 1 porem eu crio a variável t que recebe 10 + o número que esta na string na posição x e a única alteração do passo 3 é que a posição do array que eu altero é a de t-1.

#### Passo Final
Ai ao contabilizar todas as aparições eu chamo a função "contador" que basicamente verifica em todas as posições dos arrays de inteiro se o número reservado é 0, 1 ou -1 e retorna o valor de cartas que faltam em determinados naipes ou se possui cartas repetidas dentro deles representando com a mensagem erro.


## [Problema 2 - Lista palíndroma](https://olimpiada.ic.unicamp.br/pratique/ps/2021/f2/lista/)
Neste segundo problema eu aplico alguns dos meus conhecimentos adquiridos na faculdade como alocação de memoria e recursividade, podendo assim apresentar um programa muito mais refinado que o anterior. também utilizando a linguagem C.


### Passo a Passo

#### Passo 1
Eu defino a varivel N que representa a quantidade de numeros inteiros dentro do array de inteiros, apos isso eu aloco um ponteiro L com o tamanho de N inteiros e leio cada um deles.

#### Passo 2
Após armazenar o valor de cada numero do array eu chamo a função contador a qual recebe left, right, o array de inteiro e o contador de posições que precisam ser alteradas, essa função trabalha por recursividade e em sua primeira chamada ela recebe left=0, right=N-1, L, 0.

#### Passo Final
Dentro da função caso left diferente de right o contador aumenta em 1 e passa para a proxima recursão passando Left+1, Right -1, L e o C. A recursão acaba quando Left==Right ou Left>Right. 


## Problema 3 - Ogro
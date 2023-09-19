//O problema:

Uma empresa de ônibus faz diariamente 5 viagens de ida e 5 viagens de volta entre
as cidades do Rio de Janeiro e São Paulo. Cada ônibus tem 40 assentos para serem
preenchidos por passageiros. A empresa costuma vender as passagens
antecipadamente, e para cada passagem vendida é anotado o número do assento, a
data e hora, o CPF, o nome e a idade do passageiro. As passagens são vendidas por
80 reais cada.
Faça um programa para gerenciar a venda de passagens de ônibus. O programa deve
possibilitar obter as seguintes informações:

1. Qual o total arrecadado para uma determinada viagem.
2. Qual o total arrecadado em um determinado mês.
3. Qual o nome do passageiro de uma determinada poltrona P de uma determinada viagem.
4. Qual o horário de viagem mais rentável.
5. Qual a média de idade dos passageiros.

=============================================

//Resolução:

/**Criar 2 MATRIZES de struct: ÔNIBUS_IDA[5][40](SP-RJ) e ÔNIBUS_VOLTA[5][40](RJ-SP). //Cada posição das MATRIZES são equivalentes a 1 HORÁRIO[5]  & 1 PASSAGEM[40], respectivamente.**/

*Cada posição de PASSAGEM[40] deve-se iniciar com o valor 0, para isso utilize um for que vai de '0' até o limite de PASSAGEM, nesse caso 40. Após isso, ele pode receber:
    -Número do assento (Nesse caso o número será o mesmo da posição do vetor);
    -Data;
    -CPF;
    -Nome;
    -Idade;

*Deve-se criar um menu de opções (switch case) com 8 opções, sendo a última a opção de sair.
1. Qual o total arrecadado para uma determinada viagem.
    - Uma função que receba a posição ÔNIBUS_IDA[5] ou ÔNIBUS_VOLTA[5] escolhida pelo usuário;
    - Dentro da função, rode um FOR que passe por todas as posições do vetor PASSAGEM[40] que foi escolhido anteriormente através do vetor ÔNIBUS_IDA[5] ou ÔNIBUS_VOLTA e que a cada laço, caso o valor contido na posição seja diferente de 0, acrescescente a uma variável "total_viagem" o valor de R$80 e no final, retorne a variável total_viagem para o usuário.

2. Qual o total arrecadado em um determinado mês.
    - Crie uma função que receba do usuário um valor (mês);
    - Dentro da função, rode um FOR que passe, de forma sequencial, por todas as posições dos vetores ÔNIBUS_IDA[40] e ÔNIBUS_VOLTA[40], e a cada laço verifique dentro de cada posição do vetor PASSAGEM[40] se o mês contido é o mesmo escolhido pelo usuário, acrescente a uma variável "total_do_mes" o valor o valor de R$80 e no final, retorne a variável total_do_mes para o usuário.

3. Qual o nome do passageiro de uma determinada poltrona P de uma determinada viagem.
    - Crie uma função que receba do usuário um valor (HORÁRIO) e depois um valor (PASSAGEM);
    - Dentro da função, rode if-else que se o valor contido na matriz [HORÁRIO][PASSAGEM] for DIFERENTE DE 0, que retorne ao usuário a informação do NOME contidas dentro daquela posição da matriz. Caso o contrário, exiba um erro "O assento está vazio".

4. Qual o horário de viagem mais rentável.
    - Crie uma função que dentro dela rode um FOR que passe por cada matriz ÔNIBUS_IDA[5][40] e ÔNIBUS_VOLTA[5][40] e que a cada laço, rode a função(1) e logo em seguida verifique se o valor de retorno armazenado na função(1) é maior que o valor contido na matriz anterior. Caso seja, uma variável "horario_mais_rentável" recebe a posição [HORÁRIO][40] da matriz e depois retorna a variável "horario_mais_rentável" para o usuário.

5. Qual a média de idade dos passageiros.
    - Crie uma função que dentro dela rode um FOR que passe por cada matriz ÔNIBUS_IDA[5][40] e ÔNIBUS_VOLTA[5][40] e que a cada laço verifique se os valores contidos nas posições são DIFERENTES de 0, caso seja, acrescente a uma variável "soma_idades" o valor .idade contido na posição atual, além disso, acrescenta também +1 a uma variável "contador". No final do laço, acrescente a uma variável "media_idade": media_idade = soma_idades / contador. Por fim, retorne ao usuário a variável "media_idade".

6. Cadastrar passagem.
    //laço for, no final, questiona se quer adicionar outra passagem.

7. Cadastrar horário.
    //Questionar os 5 horários disponíveis.

 







    
TRASH:

/**Cada posição dos vetores deve conter: Um vetor PASSAGEM[40]. //Cada posição do vetor é equivalente a um assento.**/


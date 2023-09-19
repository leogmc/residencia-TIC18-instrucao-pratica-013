#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Passagem {
    std::string nome;
    int idade;
    char cpf;
    char data;
    int verifica;
};


    //Inicialmente, cria uma matriz (vetor de vetores) do tipo inteiro 
    std::vector<std::vector<Passagem>> onibus_ida(5, std::vector<Passagem>(40)); //  Uma matriz 5x40
    std::vector<std::vector<Passagem>> onibus_volta(5, std::vector<Passagem>(40)); // Uma matriz 5x40


    //FUNÇÕES -------------------------------------------------------------:

    void adiciona_zero(){ //Função que preenche as posições da matriz com 0.

         /**Laço que preenche as posições da matriz "onibus_ida" com "0"**/
    for(int linha = 0; linha <= onibus_ida.size(); linha++){
        for(int coluna = 0; coluna < onibus_ida[linha].size(); coluna++){
            onibus_ida[linha][coluna].verifica = 0;
        }
    }

     for(int linha = 0; linha < onibus_ida.size(); linha++){
        for (int coluna = 0; coluna < onibus_ida[linha].size(); coluna++) {
            std::cout << onibus_ida[linha][coluna].verifica << " ";
        }
        std::cout << std::endl;
    }

    //Laço que preenche as posições da matriz "onibus_volta" com "0"
    for (int linha = 0; linha <= onibus_volta.size(); linha++) {
        for (int coluna = 0; coluna < onibus_volta[linha].size(); coluna++) {
            onibus_volta[linha][coluna]= 0;
        }
    }

     for (int linha = 0; linha < onibus_volta.size(); linha++) {
        for (int coluna = 0; coluna < onibus_volta[linha].size(); coluna++) {
            std::cout << onibus_volta[linha][coluna] << " ";
        }
        std::cout << std::endl;
    }
    }

    void total_arrecadado_viagem(){ //Função 1.
    int opcao, horario, total_viagem = 0;
    std:: cout << "Digite [1] para verificar o total de uma passagem de ida ou [2] para o de uma passagem de volta:";
    std:: cin >> opcao; 

    if (opcao == 1){
    cout << "De qual horário você deseja saber o total arrecadado? escolha de 0 à 4: ";
    cin >> horario;

    for(int coluna = 0; coluna < onibus_ida[horario].size(); coluna++){
        total_viagem = total_viagem + onibus_ida[opcao][coluna];
    }
    std::cout << total_viagem;

    } else if (opcao == 2){
    cout << "De qual horário você deseja saber o total arrecadado? escolha de 0 à 4: ";
    cin >> horario;

    for(int coluna = 0; coluna < onibus_volta[horario].size(); coluna++){
        total_viagem = total_viagem + onibus_volta[opcao][coluna];
    }
    std::cout << total_viagem;

    } else {
    std::cout << "Opção inválida.";
    }
    
        
}

    void nome_passageiro(){ //Função 3.
    
    int opcao,poltrona,horario;
    cout << "Digite [1] para verificar o nome do passageiro em uma passagem de ida ou [2] para o de uma passagem de volta:";
    cin >> opcao; 

    if (opcao == 1){

    cout << "O passageiro comprou a passagem em qual horário (de 0 à 4)? ";
    cin >> horario;

    cout << "Qual a poltrona? de 0 até 39";
    cin >> poltrona; 

    std::cout << onibus_ida[horario][poltrona].nome;

    } else if (opcao == 2){
      
    std:: cout << "O passageiro comprou a passagem em qual horário (de 0 à 4)? ";
    std:: cin >> horario;

    std:: cout << "Qual a poltrona? de 0 até 39: ";
    std:: cin >> poltrona; 

    std::cout << onibus_volta[horario][poltrona].nome;

    } else {
    std::cout << "Opção inválida.";
    } 

    }


    
int main(){

    adiciona_zero();

    int escolha;
    std::cout << "Olá! Seja bem vindo ao sistema de passagem da BestBus!" << endl;
    std::cout << "======================================================" << endl;
    std::cout << endl;
    std::cout << endl;
    std::cout << "O que deseja fazer? Digite a opção desejada:" << endl;
    std::cin >> escolha;
    std::cout << endl;
    std::cout << "[1] - Solicitar o total arrecadado de determinada viagem." <<endl;
    std::cout << "[2] - Solicitar o total arrecadado em determinado mês." <<endl;
    std::cout << "[3] - Solicitar o nome do passageiro de determinada poltrona em uma determinada viagem." <<endl;
    std::cout << "[4] - Solicitar o horário de viagem mais rentável." <<endl;
    std::cout << "[5] - Solicitar a média de idade dos passageiros." <<endl;
    std::cout << "[6] - Cadastrar passagem." <<endl;
     

    switch(escolha){
    case 1:
    break;

    case 2:
    break; 
    
    case 3:
    break;

    case 4:
    break;

    case 5:
    break;

     case 6:
     break;

    default:
        break;
    }

    return 0;
}



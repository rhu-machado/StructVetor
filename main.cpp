#include <iostream>
using namespace std;

struct Pessoa {//Toda variavel do tipo 'Pessoa' criada recebe como heranca 'idade' e 'nome'
  int idade;
  string nome;
};
void exiba(string nm, int idd) {//Funcao que exibe o nome e a idade
  cout << "\nBem vindo(a) Jogador(a): " << (nm) << "\n";
  cout << "Idade: " << (idd) << "\n\n";
  cout << "==========================================";
};

int main() {
  Pessoa pessoas[3];//Vetor criado a partir da struct 'Pessoa'
  string start;//Variavel usada para simular o inicio de um possivel jogo

  std::cout << "\t---Press start---\n";
  cin >> start;
  cout << "\n";
  
  for (int x = 0; x < 3; x++) {//Estrutura que armazena os dados digitados pelo usuario em um vetor
    cout << "Digite o seu nome de Jogador " << (x + 1) << "\n";
    cin >> pessoas[x].nome;
    cout << "Digite sua idade. (" << (x + 1) << ")\n";
    cin >> pessoas[x].idade;
  }

  for (int x = 0; x < 3; x++) {//Estrutura que exibe na tela os dados digitados pelo usuario
    exiba(pessoas[x].nome, pessoas[x].idade);
  }
}

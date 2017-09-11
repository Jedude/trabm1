#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
//bibliotecas criadas:
#include "verifica.h"
#include "resultado.h"

using namespace std;

char matrizjogo[3][3]; //matriz do jogo
int linha = 0, coluna = 0; //armazenam a posição escolhida pelo usuario

void doisjogadores() {
	cout << "     0    1    2" << endl;
	cout << "0     " << matrizjogo[0][0] << " | " << matrizjogo[0][1] << " | " << matrizjogo[0][2] << endl;
	cout << " " << "  ---------------" << endl;
	cout << "1     " << matrizjogo[1][0] << " | " << matrizjogo[1][1] << " | " << matrizjogo[1][2] << endl;
	cout << " " << "  ---------------" << endl;
	cout << "2     " << matrizjogo[2][0] << " | " << matrizjogo[2][1] << " | " << matrizjogo[2][2] << endl;

	int retorno = 0;
	while (retorno != 1 && retorno != 2 && retorno != 3) {
		//Solicita que o jogador 1 escolha uma posição
		cout << endl << "Jogador 1 (O)" << endl << "Escolha uma posição (linha e coluna): ";
		cin >> linha >> coluna;

		//verifica se a posição escolhida é valida
		while (linha < 0 || linha>2 || coluna < 0 || coluna>2 || matrizjogo[linha][coluna] != ' ') {
			if (linha < 0 || linha>2 || coluna < 0 || coluna>2) {
				cout << "Linha ou coluna inexistente, favor digitar números de 0 a 2" << endl;
				cin >> linha >> coluna;
			}
			if (matrizjogo[linha][coluna] != ' ' && linha >= 0 && linha <= 2 && coluna >= 0 && coluna <= 2) {
				cout << "Essa posição ja foi preenchida, favor escolher outra!" << endl;
				cin >> linha >> coluna;
			}
		}

		system("CLS"); //limpar

		matrizjogo[linha][coluna] = 'O';

		cout << "     0    1    2" << endl;
		cout << "0     " << matrizjogo[0][0] << " | " << matrizjogo[0][1] << " | " << matrizjogo[0][2] << endl;
		cout << " " << "  ---------------" << endl;
		cout << "1     " << matrizjogo[1][0] << " | " << matrizjogo[1][1] << " | " << matrizjogo[1][2] << endl;
		cout << " " << "  ---------------" << endl;
		cout << "2     " << matrizjogo[2][0] << " | " << matrizjogo[2][1] << " | " << matrizjogo[2][2] << endl;

		retorno = verificaresultado(matrizjogo); //verifica se o jogador 1 venceu

		if (retorno != 1 && retorno != 2 && retorno != 3) {
			//Solicita que o jogador 1 escolha uma posição
			cout << endl << "Jogador 2 (X)" << endl << "Escolha uma posição (linha e coluna): ";
			cin >> linha >> coluna;

			//verifica se a posição escolhida é valida
			while (linha < 0 || linha>2 || coluna < 0 || coluna>2 || matrizjogo[linha][coluna] != ' ') {
				if (linha < 0 || linha>2 || coluna < 0 || coluna>2) {
					cout << "Linha ou coluna inexistente, favor digitar números de 0 a 2" << endl;
					cin >> linha >> coluna;
				}
				if (matrizjogo[linha][coluna] != ' ' && linha >= 0 && linha <= 2 && coluna >= 0 && coluna <= 2) {
					cout << "Essa posição ja foi preenchida, favor escolher outra!" << endl;
					cin >> linha >> coluna;
				}
			}

			system("CLS"); //limpar

			matrizjogo[linha][coluna] = 'X';

			cout << "     0    1    2" << endl;
			cout << "0     " << matrizjogo[0][0] << " | " << matrizjogo[0][1] << " | " << matrizjogo[0][2] << endl;
			cout << " " << "  ---------------" << endl;
			cout << "1     " << matrizjogo[1][0] << " | " << matrizjogo[1][1] << " | " << matrizjogo[1][2] << endl;
			cout << " " << "  ---------------" << endl;
			cout << "2     " << matrizjogo[2][0] << " | " << matrizjogo[2][1] << " | " << matrizjogo[2][2] << endl;
		}
		retorno = verificaresultado(matrizjogo); //verifica se o jogador 2 venceu
		declararesultado(retorno); //caso alguém tenha vencido, ou tenha dado empate
	}

}

void umjogador() {
	int sorteiolinha = 0;
	int sorteiocoluna = 0;
	int posicaodisponivel = 0;

	cout << "     0    1    2" << endl;
	cout << "0     " << matrizjogo[0][0] << " | " << matrizjogo[0][1] << " | " << matrizjogo[0][2] << endl;
	cout << " " << "  ---------------" << endl;
	cout << "1     " << matrizjogo[1][0] << " | " << matrizjogo[1][1] << " | " << matrizjogo[1][2] << endl;
	cout << " " << "  ---------------" << endl;
	cout << "2     " << matrizjogo[2][0] << " | " << matrizjogo[2][1] << " | " << matrizjogo[2][2] << endl;

	int retorno = 0;
	while (retorno != 1 && retorno != 2 && retorno != 3) {
		//Solicita que o jogador 1 escolha uma posição
		cout << endl << "Jogador 1 (O)" << endl << "Escolha uma posição (linha e coluna): ";
		cin >> linha >> coluna;

		//verifica se a posição escolhida é valida
		while (linha < 0 || linha>2 || coluna < 0 || coluna>2 || matrizjogo[linha][coluna] != ' ') {
			if (linha < 0 || linha>2 || coluna < 0 || coluna>2) {
				cout << "Linha ou coluna inexistente, favor digitar números de 0 a 2" << endl;
				cin >> linha >> coluna;
			}
			if (matrizjogo[linha][coluna] != ' ' && linha >= 0 && linha <= 2 && coluna >= 0 && coluna <= 2) {
				cout << "Essa posição ja foi preenchida, favor escolher outra!" << endl;
				cin >> linha >> coluna;
			}
		}

		system("CLS"); //limpar

		matrizjogo[linha][coluna] = 'O'; //marca O na posição escolhida pelo jogador 1

		cout << "     0    1    2" << endl;
		cout << "0     " << matrizjogo[0][0] << " | " << matrizjogo[0][1] << " | " << matrizjogo[0][2] << endl;
		cout << " " << "  ---------------" << endl;
		cout << "1     " << matrizjogo[1][0] << " | " << matrizjogo[1][1] << " | " << matrizjogo[1][2] << endl;
		cout << " " << "  ---------------" << endl;
		cout << "2     " << matrizjogo[2][0] << " | " << matrizjogo[2][1] << " | " << matrizjogo[2][2] << endl;

		retorno = verificaresultado(matrizjogo); //verifica se o jogador 1 venceu

		if (retorno != 1 && retorno != 2 && retorno != 3) { //caso o jogador um ainda não tenha vencido
			while (posicaodisponivel == 0) { //sorteia posições e verifica se elas ja não foram escolhidas
				sorteiolinha = 0 + (rand() % 3);
				sorteiocoluna = 0 + (rand() % 3);
				if (matrizjogo[sorteiolinha][sorteiocoluna] == ' ') {
					matrizjogo[sorteiolinha][sorteiocoluna] = 'X';
					posicaodisponivel = 1;
				}
			}
			posicaodisponivel = 0; //retorna a 0 para que sorteie novamente
								   // os cout abaixa irão marcar X na posição escolhida pelo computador	
			system("CLS");//limpar

			cout << "     0    1    2" << endl;
			cout << "0     " << matrizjogo[0][0] << " | " << matrizjogo[0][1] << " | " << matrizjogo[0][2] << endl;
			cout << " " << "  ---------------" << endl;
			cout << "1     " << matrizjogo[1][0] << " | " << matrizjogo[1][1] << " | " << matrizjogo[1][2] << endl;
			cout << " " << "  ---------------" << endl;
			cout << "2     " << matrizjogo[2][0] << " | " << matrizjogo[2][1] << " | " << matrizjogo[2][2] << endl;
		}
		retorno = verificaresultado(matrizjogo); //verifica se o computador venceu
		declararesultado(retorno); //caso alguém tenha vencido, ou tenha dado empate
	}
}

int main()
{
	int mododejogo = 0; //um ou dois jogadores
	setlocale(LC_ALL, "portuguese");

	for (int linhas = 0; linhas < 3; linhas++) //armazena um caractere vazio em todas as posições
	{
		for (int colunas = 0; colunas<3; colunas++)
		{
			matrizjogo[linhas][colunas] = ' ';
		}
	}

	while (mododejogo != 1 && mododejogo != 2) {
		cout << "Escolha um modo de jogo: " << endl;
		cout << "Um jogador vs Computador (1)" << endl;
		cout << "Dois jogadores (2)" << endl;
		cin >> mododejogo;
		if (mododejogo != 1 && mododejogo != 2) {
			cout << "Número digitado invalido, digite '1' para um jogador ou '2' para dois jogadores.";
			system("pause");
		}
		system("CLS");
	}
	if (mododejogo == 2) {
		doisjogadores();
	}
	if (mododejogo == 1) {
		umjogador();
	}
	return 0;
}




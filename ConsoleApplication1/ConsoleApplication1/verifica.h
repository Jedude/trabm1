// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#ifndef verifica_H
#define verifica_H

int verificaresultado(char conferematriz[3][3]) {
	int vencedor = 0;
	//confere se o jogador 2 venceu
	if (conferematriz[0][0] == 'X') {
		if (conferematriz[0][1] == 'X' && conferematriz[0][2] == 'X') {
			vencedor = 2;
		}
		if (conferematriz[1][0] == 'X' && conferematriz[2][0] == 'X') {
			vencedor = 2;
		}
		if (conferematriz[1][1] == 'X' && conferematriz[2][2] == 'X') {
			vencedor = 2;
		}
	}
	if (conferematriz[1][0] == 'X' && conferematriz[1][1] == 'X' && conferematriz[1][2] == 'X') {
		vencedor = 2;
	}
	if (conferematriz[2][0] == 'X' && conferematriz[2][1] == 'X' && conferematriz[2][2] == 'X') {
		vencedor = 2;
	}
	if (conferematriz[0][2] == 'X' && conferematriz[1][1] == 'X' && conferematriz[2][0] == 'X') {
		vencedor = 2;
	}

	//confere se o jogador 1 venceu
	if (conferematriz[0][0] == 'O') {
		if (conferematriz[0][1] == 'O' && conferematriz[0][2] == 'O') {
			vencedor = 1;
		}
		if (conferematriz[1][0] == 'O' && conferematriz[2][0] == 'O') {
			vencedor = 1;
		}
		if (conferematriz[1][1] == 'O' && conferematriz[2][2] == 'O') {
			vencedor = 1;
		}
	}
	if (conferematriz[1][0] == 'O' && conferematriz[1][1] == 'O' && conferematriz[1][2] == 'O') {
		vencedor = 1;
	}
	if (conferematriz[2][0] == 'O' && conferematriz[2][1] == 'O' && conferematriz[2][2] == 'O') {
		vencedor = 1;
	}
	if (conferematriz[0][2] == 'O' && conferematriz[1][1] == 'O' && conferematriz[2][0] == 'O') {
		vencedor = 1;
	}
	//verifica se toda a matriz foi preenchida
	int cont = 0;
	for (int linhas = 0; linhas < 3; linhas++)
	{
		for (int colunas = 0; colunas<3; colunas++)
		{
			if (conferematriz[linhas][colunas] == 'X' || conferematriz[linhas][colunas] == 'O') {
				cont++;
			}
		}
	}

	//caso nenhum dos dois tenha vencido=empate
	if (cont == 9 && vencedor != 1 && vencedor != 2) {
		vencedor = 3;
	}
	return vencedor;
}
#endif



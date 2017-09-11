#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>

#ifndef resultado_H
#define resultado_H

using namespace std;

void declararesultado(int resultado) {
	if (resultado == 1) {
		cout << "Resultado: O jogador 1 venceu!" << endl;
		system("pause");
	}
	if (resultado == 2) {
		cout << "Resultado: O jogador 2 venceu!" << endl;
		system("pause");
	}
	if (resultado == 3) {
		cout << "Resultado: Empate!" << endl;
		system("pause");
	}
}
#endif
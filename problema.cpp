#include<iostream>
#include<cstdlib>
#include "genetico.h"
#include "binario.h"
using namespace std;


int main()
{
	unsigned short num[6];
	bool condicao = false;
		
	cout << "Entre com 6 solucoes iniciais (numeros entre 0 e 65535):" << endl;	
	for (int i = 0; i < 6; i++)
		cin >> num[i];
	
	system("cls");  // Limpa a tela
	
	cout << "Resultado da avaliacao" << endl;	

	linha(24); //imprimi uma linha(-----) com o tamanho passado no argumeto da fun��o

	//Avalia os valores de entrada e exibe o valor, peso e condi��o do limite da mochila		
	for (int i = 0; i < 6; i++)
	{
		if (avaliacao(num[i]) == condicao)
			cout << " - " << red << "X" << default << endl;
		else
			cout << " - " << green << "Ok" << default << endl;
	}

	linha(24);
	
	//Chamada da fun��o cruzamentoPontoUnico() entre as duas primeiras solu��es
	//fornecidas pelo usu�rio
	if((cruzamentoPontoUnico(num[0], num[1]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	//Chamada da fun��o cruzamentoAritmetico() entre a terceira e quarta solu��es
	//fornecidas pelo usu�rio
	if ((cruzamentoAritmetico(num[2], num[3]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	//Chamada da fun��o mutacaoSimles() da quarta solu��o - modificando o bit 10 do
	//valor fornecido pelo usu�rio
	if ((mutacaoSimles(num[4]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	//Chamada da fun��o mutacaoSimles() da quinta solu��o - modificando os bits determinados
	//pelo exerc�cio do valor fornecido pelo usu�rio
	if ((mutacaoDupla(num[5]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	cout << endl;
	system("pause");    // Pausa a execu��o (pressione qualquer tecla para continuar)
	return 0;           // Retorna 0 (se a fun��o main for executada corretamente)
}


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

	linha(24); //imprimi uma linha(-----) com o tamanho passado no argumeto da função

	//Avalia os valores de entrada e exibe o valor, peso e condição do limite da mochila		
	for (int i = 0; i < 6; i++)
	{
		if (avaliacao(num[i]) == condicao)
			cout << " - " << red << "X" << default << endl;
		else
			cout << " - " << green << "Ok" << default << endl;
	}

	linha(24);
	
	//Chamada da função cruzamentoPontoUnico() entre as duas primeiras soluções
	//fornecidas pelo usuário
	if((cruzamentoPontoUnico(num[0], num[1]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	//Chamada da função cruzamentoAritmetico() entre a terceira e quarta soluções
	//fornecidas pelo usuário
	if ((cruzamentoAritmetico(num[2], num[3]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	//Chamada da função mutacaoSimles() da quarta solução - modificando o bit 10 do
	//valor fornecido pelo usuário
	if ((mutacaoSimles(num[4]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	//Chamada da função mutacaoSimles() da quinta solução - modificando os bits determinados
	//pelo exercício do valor fornecido pelo usuário
	if ((mutacaoDupla(num[5]) == condicao))
		cout << " - " << red << "X" << default << endl;
	else
		cout << " - " << green << "Ok" << default << endl;

	cout << endl;
	system("pause");    // Pausa a execução (pressione qualquer tecla para continuar)
	return 0;           // Retorna 0 (se a função main for executada corretamente)
}


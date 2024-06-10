#include<iostream>
#include "genetico.h"
#include "binario.h"
using namespace std;

//====================== DESENVOLVIMENTO DAS FUNÇÕES ==========================

//imprime a quantidade de linha informada pelo usuário
void linha(int num)
{
	for (int i = 0; i <= num; i++)
		cout << "-";
	cout << endl;

} //end linha()

// Retorna um booleano indicando se o peso está dentro do limite da mochila
// e imprime o valor e o peso total da solução
bool avaliacao(unsigned short solucao)
{
	int peso = 0, valor = 0;

	unsigned short mascara = 1; 

	for (int bit = 0; bit < 16; bit++)
	{
		if (solucao & mascara << bit) // desloca o bit para a esquerda a cada iteração
		{
			switch (bit)
			{
			case 0: peso += PESO_P;
				valor += VALOR_P;
				break;
			case 1: peso += PESO_O;
				valor += VALOR_O;
				break;
			case 2: peso += PESO_N;
				valor += VALOR_N;
				break;
			case 3: peso += PESO_M;
				valor += VALOR_M;
				break;
			case 4: peso += PESO_L;
				valor += VALOR_L;
				break;
			case 5: peso += PESO_K;
				valor += VALOR_K;
				break;
			case 6: peso += PESO_J;
				valor += VALOR_J;
				break;
			case 7: peso += PESO_I;
				valor += VALOR_I;
				break;
			case 8: peso += PESO_H;
				valor += VALOR_H;
				break;
			case 9: peso += PESO_G;
				valor += VALOR_G;
				break;
			case 10: peso += PESO_F;
				valor += VALOR_F;
				break;
			case 11: peso += PESO_E;
				valor += VALOR_E;
				break;
			case 12: peso += PESO_D;
				valor += VALOR_D;
				break;
			case 13: peso += PESO_C;
				valor += VALOR_C;
				break;
			case 14: peso += PESO_B;
				valor += VALOR_B;
				break;
			case 15: peso += PESO_A;
				valor += VALOR_A;
				break;
			}
		}
	}
	cout << left; cout.width(5); cout << solucao << " - R$" << valor << " - ";
	cout << right; cout.width(2); cout << peso << "Kg";

	return peso <= LIMITEMOCHILA;

} //end avaliacao()

//Retorna o cruzamento ponto único entre os dois valores passados por parâmetro
unsigned short cruzamentoPontoUnico(unsigned short valor1, unsigned short valor2)
{
	unsigned short valor = bitsAltos(valor1) | bitsBaixos(valor2);

	return avaliacao(valor);
}

// Retorna um valor inteiro representando o cruzamento entre os valores passados por parametro
unsigned short cruzamentoAritmetico(unsigned short valor1, unsigned short valor2)
{
	unsigned short valor = andBinario(valor1, valor2);
	return avaliacao(valor);
}

// Retorna um valor com um bit modificado(neste caso o bit foi determinado no exercício)
unsigned short mutacaoSimles(unsigned short valor)
{
	unsigned short mascara = 1 << 9;		   
	valor = valor | mascara;

	return avaliacao(valor);
}

// Retorna um valor com dois bits modificado(neste caso os bits foram determinado no exercício)
unsigned short mutacaoDupla(unsigned short valor)
{
	unsigned short mascara1 = 1 << 3,
				   mascara2 = 1 << 12;
	mascara1 = mascara1 | mascara2;
	
	//valor = valor ^ mascara1;

	return avaliacao(valor ^ mascara1);
}
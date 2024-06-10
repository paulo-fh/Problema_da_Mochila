#include<iostream>
#include "binario.h"

//========================= DESENVOLVIMENTO DAS FUNÇÕES ==============================

// altera(liga) o bit da posicao indicada no parametro(posicao) e retorna o valor modificado
unsigned short ligarBit(unsigned short valor, int posicao)
{
	return 1 << posicao | valor;
}

// altera(desliga) o bit da posicao indicada no parametro(posicao) e retorna o valor modificado
unsigned short desligarBit(unsigned short valor, int posicao)
{
	return valor & ~(1 << posicao);
}

// Retorna um booleano(true ou false) indicando se o bit está ou não ligado
bool testarBit(unsigned short valor, int posicao)
{
	return valor & (1 << posicao);
}

// Retorna um inteiro do resultado de AND( & ) bit a bit dos valores recebitos por parametro
unsigned short andBinario(unsigned short valor1, unsigned short valor2)
{
	return valor1 & valor2;
}

// Retorna um inteiro do resultado de OR( | ) bit a bit dos valores recebitos por parametro
unsigned short orBinario(unsigned short valor1, unsigned short valor2)
{
	return valor1 | valor2;
}

// Retorna um inteiro contendo apenas os 8bits de mais baixa ordem do valor passado por parametro
//os demais bits são colocados zero
// Ex: 1001 1100(entrada) ->> 0000 1100(retorno)
unsigned short bitsBaixos(unsigned short valor)
{
	unsigned short result = 0;
	for (int i = 0; i < 8; i++)
	{
		result += andBinario(valor, (1 << i));
	}
	return result;
}

// Retorna um inteiro contendo apenas os 8bits de ordem mais alto valor passado por parametro
//os demais bits são colocados zero
// Ex: 1001 1100(entrada) ->> 1001 0000(retorno)
unsigned short bitsAltos(unsigned short valor)
{
	unsigned short result = 0;
	for (int i = 8; i < 16; i++)
	{
		result += andBinario(valor, (1 << i));
	}
	return result;
}
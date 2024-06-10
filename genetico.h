
//============= PROTÓTIPO DAS FUNÇÕES PRESENTES EM GENETICO.CPP =================

void linha(int num); 
bool avaliacao(unsigned short solucao); 
unsigned short cruzamentoPontoUnico(unsigned short valor1, unsigned short valor2);
unsigned short cruzamentoAritmetico(unsigned short valor1, unsigned short valor2);
unsigned short mutacaoSimles(unsigned short valor);
unsigned short mutacaoDupla(unsigned short valor);

//====================== DIRETIVAS DE PRÉ-PROCESSAMENTO ==========================

// Definição de valores para a mochila(Kg) e objetos(Kg e R$) 

// LIMITE DA MOCHILA(Kg)
#define LIMITEMOCHILA 20

// PESOS(kg) - DEFINIDOS PARA OS OBJETOS 
#define PESO_A 12
#define PESO_B 3
#define PESO_C 5
#define PESO_D 4
#define PESO_E 9
#define PESO_F 1
#define PESO_G 2
#define PESO_H 3
#define PESO_I 4
#define PESO_J 1
#define PESO_K 2
#define PESO_L 4
#define PESO_M 5
#define PESO_N 2
#define PESO_O 4
#define PESO_P 1

// VALORES(R$) - DEFINIDOS PARA OS OBJETOS 
#define	VALOR_A 4
#define	VALOR_B 4
#define	VALOR_C 8
#define	VALOR_D 10
#define	VALOR_E 15
#define	VALOR_F 3
#define	VALOR_G 1
#define	VALOR_H 1
#define	VALOR_I 2
#define	VALOR_J 10
#define	VALOR_K 20
#define	VALOR_L 15
#define	VALOR_M 10
#define	VALOR_N 3
#define	VALOR_O 4
#define	VALOR_P 12


// DEFINIÇAO DE CORES
#define red "\033[31m"
#define green "\033[32m"
#define default "\033[m"
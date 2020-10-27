#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

using namespace std;

struct pessoas {
char nome[30];
char fim[50];
char cpf[11];
char idade[3];
};

int main(int argc, char * * argv) {
	pessoas nome[4];
	pessoas fim[4];
	pessoas cpf[4];
	pessoas idade[4];

for (int i = 0; i < 4; i++) {
	cout << "Digite o nome da " << i+1 << " pessoa" << endl;
	gets(nome[i].nome);
	cout << "Digite o endereo da " << i+1 << " pessoa" << endl;
	gets(fim[i].fim);
	cout << "Digite o cpf da " << i+1 << " pessoa" << endl;
	gets(cpf[i].cpf);
	cout << "Digite a idade da " << i+1 << " pessoa" << endl;
	gets(idade[i].idade);
}

for (int i = 0; i < 4; i++) {
	printf("NOME:");
	printf(nome[i].nome);
	printf("ENDERECO:");
	printf(fim[i].fim);
	printf("CPF:");
	printf(cpf[i].cpf);
	printf("IDADE:");
	printf(idade[i].idade);
}
return 0;
}

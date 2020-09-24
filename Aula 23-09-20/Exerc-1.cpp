#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char nomes [10];
	char nome;
	int i = 0;
	bool encontrou;

	for(i = 0; i <= 9; i++)
	{
		cout << "Digite o " << i << "º nome";
		cin >> nomes[i];
	}

	cout << " Agora escreva o nome a ser buscado";
	cin >> nome;

	encontrou = false;
	for(i = 0; i <= 9; i++)
	{
		if(nomes[i] = nome)
		{
			encontrou = true;
		}
	}

	if(encontrou = true)
	{
		cout << "O nome esta no vetor!";
	}
	else
	{
		cout << " O nome nao esta no vetor";
	}

	return 0;
}

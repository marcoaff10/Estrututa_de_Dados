#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	float temperatura[5];
	float maior, menor, media;
	int a;
	int qnt;

	media = 0;
	for(a = 0; a <= 4; a++)
	{
		cout << "Digite a temperatura do dia: ";
		cin >> temperatura[a];

		if(a = 1)
		{
			maior = temperatura[a];
			menor = temperatura[a];
		}

		if(temperatura[a] > maior)
		{
			maior = temperatura[a];
		}

		if(temperatura[a] < menor)
		{
			menor = temperatura[a];
		}

		media = media + temperatura[a];
	}

	media = media / 5;
	for(a = 0; a <= 4 ; a++)
	{
		if(temperatura[a] < media)
		{
			qnt = qnt + 1;
		}
	}

	cout << "Menor temperatura do ano: " << menor << endl;
	cout << "Maior temperatura do ano: " << maior << endl;
	cout << "Temperatura media do ano: " << media << endl;
	cout << "Numero de dias com temperatura abaixo da media anual: " << qnt << endl;
	return 0;
}

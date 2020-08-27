#include <iostream>
using namespace std;

int main()
{
	int idade;

	cout << "Diga a idade do nadador: ";
	cin >> idade;

	if(idade >= 5  <= 7)
	{
		cout << "Cagetogia: Infantil A.";
	}
	if(idade > 7 <= 10)
	{
		cout << "Categoria: Infantil B.";
	}
	if(idade > 10 <= 13)
	{
		cout << "Categoria: Juvenil A.";
	}
	if(idade > 13 <= 17)
	{
		cout << "Categoria: Juvenil B.";
	}
	if(idade > 17)
	{
		cout << "Categoria: Senior.";
	}
	return 0;
}

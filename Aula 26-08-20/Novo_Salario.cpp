#include <iostream>
using namespace std;
int main()
{

	float salario;
	float salarioRec;

	cout << "Digite seu novo salario: ";
	cin >> salario;

	if(salario < 1000)
	{
		salarioRec = (salario / 100) * 15 + salario;
		cout << "Seu salario eh: " << salarioRec;
	}
	if(salario >= 1000 <= 1500)
	{
		salarioRec = (salario / 100) * 10 + salario;
		cout << "Seu salario eh: " << salarioRec;
	}
	if(salario > 1500)
	{
		salarioRec = (salario / 100) * 5 + salario;
		cout << "Seu salario eh: " << salarioRec;
	}



}

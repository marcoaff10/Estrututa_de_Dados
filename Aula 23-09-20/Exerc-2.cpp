#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	float nota[20];
	float soma, media;
	int i = 0;
	int cont;
	
	soma = 0;
	for(i = 0; i<=19; i++)
	{
		cout <<"Digite a nota do " << i <<"º aluno: " <<endl;
		cin >>nota[i];
		
		soma = soma + nota[i];
	}
	
	media = soma / 20;
	cont = 0;
	for(i = 0; i <= 19; i++)
	{
		if(nota[i] > media)
		{
			cont = cont + 1;
		}
	}
	
	cout <<"Media: " <<media <<endl;
	cout <<cont <<" alunos obtiveram nota acima da media";
	return 0;
}
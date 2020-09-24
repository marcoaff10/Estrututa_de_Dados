#include <iostream>
using namespace std;

main()
{
	int cand1 = 0;
	int cand2 = 0;
	int nulo = 0;
	int branco = 0;
	int i ;

	while(i > 0)
	{

		cout << " Digite 0 para sair, 1 e 2 para os respectivos candidatos, 3 para voto nulo e 4 para votar em branco: ";
		cin >> i;
		if(i = 1)
		{
			cand1 = cand1 + 1;
		}
		if(i = 2)
		{
			cand2 = cand2 + 1;
		}
		if(i = 3)
		{
			nulo = nulo + 1;
		}
		if(i = 4)
		{
			branco = branco + 1;
		}
		if(i = 0)
		{
			cout <<"Fim do programa." << endl;
		} 
		else
		{
			cout <<"Voto invalido!!";
		}
	}

	return 0;
}

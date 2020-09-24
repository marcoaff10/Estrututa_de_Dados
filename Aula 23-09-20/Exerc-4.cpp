#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;



int main(int argc, char** argv)
{
	int x[20], i;

	for(i = 0; i < 20; i++)
	{

		cout << "\n Insira um valor " << i<<": "<<endl;
		cin >> x[i];
	}

	i--;

	for(; i >= 0; i--)

		cout << "Vetor inverso: " << x[i]<<endl;
	return 0;
}

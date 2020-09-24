#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int A, M[10];
	int x = 0;
	
	cout <<" Informe 10 numeros."<<endl;
	for(x = 0; x <=9; x++)
	{
		cout<<"Digite o " << x <<"º numero:"<<endl;
		cin >> A[x];
	}
	cout<<" Agora informe um novo numero: ";
	cin >> x;
	cout <<"X = " << x;
	
	M = A[x] * x;
	

	 
	 
	return 0;
}
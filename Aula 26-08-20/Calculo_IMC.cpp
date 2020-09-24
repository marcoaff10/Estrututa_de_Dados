#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float peso;
	float altura;
	float IMC;
	
	cout <<"Digite seu peso: " <<endl;
	cin >> peso;
	cout <<"Digite sua altura: ";
	cin >> altura;
	
	IMC = peso / pow(altura,2);
	
	if(IMC < 20)
	{
		cout <<"Seu IMC eh: " << IMC <<". Voce esta Abaixo Do Peso!";
	}
	
	if(IMC >= 20 < 25)
	{
		cout <<"Seu IMC eh: " << IMC <<". Voce esta no Peso Ideal!";
	}
	
	if(IMC >= 25)
	{
		cout <<"Seu IMC eh: " << IMC <<". Voce esta Acima Do Peso!";
	}
	return 0;
}
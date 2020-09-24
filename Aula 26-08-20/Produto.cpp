#include <iostream>
using namespace std;
#define PRODUTO Pc Gamer
#define PRECO 5000
int main()
{
	char formaPag;
	float valorPag;
	float desc;
	cout << "Produto:Pc Gamer." << endl;
	cout << "Preco: R$5.000" << endl;
	cout << "Ver formas de pagamento? : ";
	cin >> formaPag;


	desc = (PRECO / 100) * 10;
	valorPag = PRECO - desc;
	cout << "Valor a pagar: R$" << valorPag << ". Com 10% de deconto." <<endl;

	desc = (PRECO / 100) * 5;
	valorPag = PRECO - desc;
	cout << "A Vista no cartao de credito: R$" << valorPag << ". Com 5% de desconto." <<endl;


	valorPag = PRECO;
	cout << "Parcelado em 2x: R$" << valorPag << ". " <<endl;


	desc = (PRECO / 100) * 10;
	valorPag = PRECO + desc;
	cout << "Parcelado em 3x: R$" << valorPag << ". Com acrescimo de 10%" <<endl;


}

#include <iostream>
using namespace std;
#define SALARIOMIN 1.045
int main()
{
	int horasTrab;
	float salarioBrut;
	float valorHorasTrab;
	float salarioReceb;
	float imposto;

	cout << "Digite a quantidade de horas trabalhadas: ";
	cin >> horasTrab;


	valorHorasTrab =  SALARIOMIN / 220;
	salarioBrut = horasTrab * valorHorasTrab;
	salarioReceb = (salarioBrut / 3) * 100 - salarioBrut;
	
	cout << " Salario mensal a receber: " <<salarioReceb;
	
	
	return 0;

}

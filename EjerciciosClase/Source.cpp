#include <iostream>
using namespace std;

int main() {
	int salario, anios, sfinal;
	cout << "Digite el salario: " << endl; cin >> salario;
	cout << "Digite los anios trabajados: " << endl; cin >> anios;
	if (anios > 4)
	{
		sfinal = salario + (salario * 0.2);
	}
	else if (1<anios<4){
		sfinal = salario + (salario * 0.02);
	}
	cout << "El salario final es de: " << sfinal << endl;
	system("pause");
}
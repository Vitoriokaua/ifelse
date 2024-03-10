#include <iostream>
#include <string>
using namespace std;

int main() {

	bool bFezSol;
	bool bAcesso= false;
	int cont = 1;

	string senhadeacesso = "uepb";
	string senhainformada;

	cout <<"digite a senha de acesso:  ";
	cin >> senhainformada;



	
	if (senhainformada == senhadeacesso)
	{
		cout << "acesso liberado";
		bAcesso = true;
	}
	else
	{
		while (senhainformada != senhadeacesso and cont<5)
		{
			cout << "acesso negado tente novamente: ";
			cin >> senhainformada;
			cont += 1;
		}
		cout << "acesso bloqueado";
		bAcesso = false;
	}
	return 0;

}

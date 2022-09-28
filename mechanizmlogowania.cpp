#include <iostream>
using namespace std;
int main()
{
	string login,haslo;
	cout << "Podaj login" << endl;
	cin >> login;
	cout << "Podaj haslo" << endl;
	cin >> haslo;
	if((login=="admin")&&(haslo=="szarlotka"))
	{
		cout << "Udalo sie zalogowac" << endl;
	}
	else 
	{
		cout << "Nie udalo sie zalogowac" << endl;
	}
}

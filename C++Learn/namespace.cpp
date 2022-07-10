#include<iostream>
#include"namespace.h"

namespace Pers {

	using std::cout;
	using std::cin;
	void getPerson(Person& rp)
	{
		cout << "Enter first name:";
		cin >> rp.firname;
		cout << "Enter first name:";
		cin >> rp.lastname;
	
	}

	void showPerson(const Person& rp)
	{

		cout << rp.firname << " ," << rp.lastname << std::endl;

	}

}
namespace debts {

void getDebt(Debets& dt)
{


	showPerson(dt.name);
	cout << "$ :" << dt.amount << std::endl;

}

}
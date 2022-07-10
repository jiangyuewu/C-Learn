#pragma once
#include<string>

namespace Pers
{
	struct Person
	{
		std::string firname;
		std::string lastname;
	};


void getPerson(Person& rp);

void showPerson(const Person& rp);


}

namespace debts {



	using namespace Pers;
	struct Debets
	{
		Person name;
		double amount;
	};

	void getDebt(Debets& dt);



}
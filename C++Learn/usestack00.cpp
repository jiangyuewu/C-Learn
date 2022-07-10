#include"TenChapter.h"
const int STKS = 4;
#include"stack.h"
#include<cctype>
#include"mytime0.h"

int main1()

{

	//Stock flufly;
	//flufly.acquire("Nano", 20, 12.5);
	//flufly.show();
	//flufly.buy(15, 18.125);
	//flufly.show();
	//flufly.sell(30, 20);
	//flufly.show();
	//Stock flufly2("Nano2", 20, 12.5);
	//flufly2.show();
	//Stock top =  flufly.topval(flufly2);
	//top.show();
		
	/*Stock stock[STKS] = {

	Stock("A",12,20.00),
	Stock("B", 200, 30.00),
	Stock("C", 120, 20.00),
	Stock("D", 160, 30.00),
	};
	std::cout << "Stock holding\n";
	for (size_t i = 0; i < STKS; i++)
	{

		stock[i].show();

	}
	std::cout << "Stock Max value ___\n";
	Stock top = stock[0];
	for (size_t i = 1; i < STKS; i++)
	{

		top = top.topval(stock[i]);
	}
	top.show();*/

	std::cout << "a, p , q" << std::endl;
	char ch;
	Stack st;
	unsigned long po;
	while (std::cin>>ch && toupper(ch) != 'Q')
	{
		while (std::cin.get()!= '\n')
		{
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			std::cin >> po;
			if (st.isfull())
			{
				std::cout << "Stack already full" << std::endl;
			}
			else
			{
				st.push(po);
			}
			break;
		case 'P':
		case 'p':
			if (st.isempty())
			{
				std::cout << "Stack already empty" << std::endl;
			}
			else
			{
				st.pop(po);
				std::cout << "chuzhan" << po << std::endl;
			}
			break;


		default:
			break;
		}

		std::cout << "Next_______" << std::endl;


	}


	return 0;
}

typedef struct test
{
	int a;
	std::string path;
}Test;


class Num
{
public:
	Num();
	Num(int m);
	//Num operator+(const Num& t)const;
	void Show() const;
	~Num();

private:
	int n;

};

Num::Num()
{
	this->n = 0;
}

Num::Num(int m)
{
	this->n = m;
}

//Num Num::operator+(const Num& t) const
//{
//	Num tmp;
//	tmp.n = this->n + t.n;
//
//	return tmp;
//}

void Num::Show() const
{
	std::cout << "N = " << this->n << std::endl;
}

Num::~Num()
{
}

Num operator+(const Num& m, const Num& n)
{
	Num temp;
	

}


int main()
{
	Num  a(10);
	a.Show();
	Num b(20);
	b.Show();
	Num c;
	c = a + b;
	c.Show();




	return 0;
}






int main_()
{
	Time coding(2, 40);
	Time fixing(5, 55);

	coding.show();
	fixing.show();
	//Time tot = fixing.Sum(coding);
	Time tot = coding + fixing;
	tot.show();


	return 0;
}